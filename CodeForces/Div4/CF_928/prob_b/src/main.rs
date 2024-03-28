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
        let n = take_int();
        let mut all_rws: Vec<Vec<char>> = Vec::new();
        for i in 0..n {
            let mut rw: Vec<char> = Vec::new();
            let inp = take_string();
            for k in inp {
                if k == '1' {
                    rw.push('1');
                }
            }
            if (rw.len() > 0) {
                all_rws.push(rw);
            }
        }
        let mut st: HashSet<usize> = HashSet::new();
        for k in all_rws.iter() {
            st.insert(k.len());
        }

        match st.len() == 1 {
            true => {
                println!("SQUARE");
            }
            _ => {
                println!("TRIANGLE");
            }
        }
        t -= 1;
    }
}

pub fn main() {
    solve();
}
