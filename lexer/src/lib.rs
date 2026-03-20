pub mod typeof_token;
use typeof_token::{Src, Token};

pub fn lex(mut source: Src) -> Vec<Token> {
    let mut tokens: Vec<Token> = Vec::new();
    while let Some(token) = token(&mut source) {
        tokens.push(token);
    }
    tokens
}



fn token(source: &mut Src) -> Option<Token> {
    let c: &char = source.peek()?;
    if c.is_ascii_digit() {
        Some(number(source))
    } else if c.is_ascii_alphabetic() {
        Some(identifier_or_keyword(source))
    } else {
        symbol(source)    
    }
}

fn number(source: &mut Src) -> Token {
    let buffer: String = take_till(source, |c| c.is_ascii_digit());
    let token: i64 = buffer.parse().unwrap();
    Token::Number(token)
}

fn identifier_or_keyword(source: &mut Src) -> Token {
    let buffer: String = take_till(source, |c| c.is_ascii_alphanumeric());
    match buffer.as_str() {
        "let" => Token::Let,
        _ => Token::Identifier(buffer),
    }
}

fn take_till(source: &mut Src, till: impl Fn(char) -> bool) -> String {
    let mut buffer: String = String::new();
    while let Some(c) = source.peek() {
        if !till(*c) {
            break;
        }
        buffer.push(*c);
        source.next();
    }
    buffer
}

fn symbol(source: &mut Src) -> Option<Token> {
    let c: char = source.next().unwrap();
    match c {
        '=' => Some(Token::EqualSign),
        ' ' | '\n' | '\t' => skip(source),
        _ => panic!("Unexpected token: '{c}'"),
    }
}

fn skip(source: &mut Src) -> Option<Token> {
    skip_till(source, |c| matches!(c, ' ' | '\n' | '\t'));
    token(source)
}

fn skip_till(source: &mut Src, till: impl Fn(char) -> bool) {
    while let Some(c) = source.peek() {
        if !till(*c) {
            break;
        }
        source.next();
    }
}
