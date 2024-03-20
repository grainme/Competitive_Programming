#![allow(unused)]

use std::io::stdin;

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

// 19 + 7 + 16 = 20 + 3 + 5
fn solve() {
    let mut t: usize = take_int();
    while t > 0 {
        let mut v = take_vector();
        if v[1] % 3 != 0 && 3 - v[1] % 3 > v[2] {
            println!("-1");
        } else {
            let mut res = 0;
            res += v[1] / 3;
            if v[1] % 3 != 0 {
                res += 1;
                v[2] -= 3 - v[1] % 3;
            }
            if v[2] > 0 {
                res += v[2] / 3;
                v[2] %= 3;
            }
            if v[2] > 0 {
                res += v[2] / 2;
                v[2] %= 2;
            }
            res += v[0];
            if v[2] > 0 {
                res += v[2];
            }
            println!("{}", res);
        }
        t -= 1;
    }
}

pub fn main() {
    solve();
}
