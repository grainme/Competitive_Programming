#![allow(unused)]

use std::{io::stdin, usize};

fn take_int() -> usize {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    return input.trim().parse().unwrap();
}

fn take_vector() -> Vec<usize> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let arr: Vec<usize> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    return arr;
}

fn take_string() -> Vec<char> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let vec: Vec<char> = input.trim().chars().collect();
    return vec;
}
fn to_string(vec: Vec<char>) -> String {
    return vec.iter().collect::<String>();
}

fn solve() {
    let mut t: usize = take_int();
    while t > 0 {
        let input = take_vector();
        match 2 * input[1] <= input[2] {
            true => {
                println!("{}", input[0] * input[1]);
            }
            _ => {
                println!("{}", input[0] / 2 * input[2] + (input[0] % 2) * input[1]);
            }
        }
        t -= 1;
    }
}

pub fn main() {
    solve();
}
