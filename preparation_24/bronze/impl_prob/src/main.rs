#![allow(unused)]

use std::{cmp::max, collections::HashMap, io::stdin, usize};

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
        let sz = take_int();
        let s = take_string();
        let mut left = 0;
        let mut right = 0;
        let mut mx_ever = 0;
        let mut mpp: HashMap<char, i32> = HashMap::new();
        while right < sz {
            let b_occ: i32 = match mpp.get(&'b') {
                Some(n) => *n,
                None => 0,
            };
            let c_occ: i32 = match mpp.get(&'c') {
                Some(n) => *n,
                None => 0,
            };

            let a_occ: i32 = match mpp.get(&'a') {
                Some(n) => *n,
                None => 0,
            };
            let curr = match mpp.get(&s[right as usize]) {
                Some(n) => *n,
                None => 0,
            };
            if a_occ > b_occ && a_occ > c_occ {
                mpp.insert(s[right as usize], curr + 1);
                right += 1;
            } else {
                mpp.insert(s[left as usize], curr - 1);
                left += 1;
            }
            mx_ever = max(mx_ever, right - left + 1);
        }
        if mx_ever >= 2 {
            println!("{}", mx_ever);
        } else {
            println!("-1");
        }
        t -= 1;
    }
}

pub fn main() {
    solve();
}
