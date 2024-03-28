#![allow(unused)]

use std::{collections::HashSet, io::stdin, usize};

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
    let mut t = take_int();
    while t > 0 {
        let mut first_i = '#';
        let n = take_int();
        for i in (0..2 * n) {
            let mut first_k = first_i;
            for k in (0..2 * n) {
                print!("{}", first_k);
                first_k = match k % 2 != 0 {
                    true => match first_k == '#' {
                        true => '.',
                        _ => '#',
                    },
                    _ => first_k,
                }
            }
            first_i = match i % 2 != 0 {
                true => match first_i == '#' {
                    true => '.',
                    _ => '#',
                },
                _ => first_i,
            };
            println!();
        }
        t -= 1;
    }
}

pub fn main() {
    solve();
}
