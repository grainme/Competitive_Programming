#![allow(unused)]

use std::{cmp::min, collections::HashSet, io::stdin, usize};

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

static mut N: i32 = 0;

fn shortest_path(n: i32, m: i32) -> i32 {
    unsafe {
        if n == m {
            return N;
        }
        N += 1;
        return min(shortest_path(n * 2, m), shortest_path(n - 1, m));
    }
}

fn solve() {
    let v = take_vector();
    let n = v[0];
    let m = v[1];
    println!("{}", shortest_path(n as i32, m as i32));
}

pub fn main() {
    solve();
}
