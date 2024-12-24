use std::{collections::HashSet, io};

fn solve() {
    let mut n = String::new();
    io::stdin().read_line(&mut n).expect("failed to read input");

    let mut line = String::new();
    io::stdin().read_line(&mut line).expect("failed");
    let inp: HashSet<i64> = line
        .split_whitespace()
        .map(|c| c.parse().expect("failed to parse"))
        .collect();

    println!("{}", inp.len());
}

fn main() {
    solve();
}
