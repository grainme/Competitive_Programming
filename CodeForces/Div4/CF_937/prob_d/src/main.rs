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
    let all_bins = [
        1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000,
        10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101,
        11110, 11111, 100000,
    ];
    let mut dp: Vec<bool> = Vec::with_capacity(100000);
    for i in 0..100001 {
        dp.push(false);
    }
    for &i in all_bins.iter() {
        dp[i as usize] = true;
    }
    dp[0] = true;
    dp[1] = true;
    for i in 0..100001 {
        for k in all_bins.iter() {
            if i % k == 0 && dp[i / k] == true {
                dp[i] = true;
                break;
            }
        }
    }
    while t > 0 {
        let n = take_int();
        println!("{}", if dp[n] == true { "YES" } else { "NO" });
        t -= 1;
    }
}

pub fn main() {
    solve();
}
