use std::iter::Peekable;
use std::str::Chars;

pub type Src<'a> = Peekable<Chars<'a>>;

#[derive(Debug)]
pub enum Token {
    Number(i64),
    Identifier(String),
    Let,
    EqualSign,
}
