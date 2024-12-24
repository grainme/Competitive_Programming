use std::{cmp::min, i128, io};

fn read_i128() -> i128 {
    let mut n = String::new();
    io::stdin().read_line(&mut n).unwrap();
    n.trim().parse::<i128>().unwrap()
}

fn read_vec_i128() -> Vec<i128> {
    let mut line = String::new();
    io::stdin().read_line(&mut line).unwrap();
    line.split_whitespace()
        .map(|c| c.parse::<i128>().unwrap())
        .collect()
}

fn abs(n: i128) -> i128 {
    match n >= 0 {
        true => n,
        _ => -n,
    }
}

fn solve() {
    let nmk = read_vec_i128();
    let mut line_1 = read_vec_i128();
    let mut line_2 = read_vec_i128();
    line_1.sort_by(|a, b| b.cmp(a));
    line_2.sort_by(|a, b| b.cmp(a));
    let [n, m, k] = [nmk[0], nmk[1], nmk[2]];
    let mut i = 0;
    let mut j = 0;
    let mut ans = 0;
    loop {
        if i >= n as usize || j >= m as usize {
            break;
        }
        match (line_1[i] - line_2[j]).abs() <= k {
            true => {
                i += 1;
                j += 1;
                ans += 1;
            }
            false => match line_1[i] > line_2[j] + k {
                true => i += 1,
                false => j += 1,
            },
        }
    }
    println!("{}", ans);
}

fn main() {
    solve();
}

