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
        let s = take_string();
        let mut hours = String::from(s[0]);
        hours.push(s[1]);
        let mut hours: i32 = hours.parse().expect("failed to parse string");
        let mut pm_am = "AM";
        if hours >= 12 {
            pm_am = "PM";
            hours -= 12;
        }
        if hours <= 0 {
            hours += 12;
        }
        let mut ss = String::new();
        for i in 3..5 {
            ss.push(s[i as usize]);
        }
        if hours < 10 {
            print!("0");
        }
        println!("{}:{} {}", hours, ss, pm_am);
        t -= 1;
    }
}

pub fn main() {
    solve();
}
