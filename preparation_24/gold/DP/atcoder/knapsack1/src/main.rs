#![allow(unused)]

use core::f64;
use std::{cmp::min, f32::INFINITY, io::stdin, usize};

fn take_int() -> usize {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    return input.trim().parse().unwrap();
}

fn take_vector() -> Vec<i32> {
    let mut input = String::new();
    stdin().read_line(&mut input).unwrap();
    let arr: Vec<i32> = input
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
    let n = take_int();
    let input = take_vector();
    let mut dp: Vec<i32> = Vec::new();
    let mx: usize = 1e5 as usize;
    for i in 0..mx {
        dp.push(f64::INFINITY as i32);
    }
    dp[0] = 0;
    for i in 1..n {
        match i >= 2 {
            true => {
                dp[i] = min(
                    dp[i],
                    dp[i - 2] + i32::abs(input[i - 2 as usize] - input[i as usize]),
                );
            }
            false => {}
        }
        dp[i] = min(
            dp[i],
            dp[i - 1] + i32::abs(input[i - 1 as usize] - input[i as usize]),
        );
    }
    println!("{}", dp[n - 1 as usize]);
}

pub fn main() {
    solve();
}
