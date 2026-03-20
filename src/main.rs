use lexer::*;

const SOURCE: &'static str = r#"
let a = 123
let number = 67
"#;

fn main() {
    let tokens: Vec<typeof_token::Token> = lex(SOURCE.chars().peekable());

    println!("{:#?}", tokens);
}
