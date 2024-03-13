use std::{i32, io};

fn main() {
    let mut tests = String::new();
    io::stdin()
        .read_line(&mut tests)
        .expect("failed to read input");
    let mut t: usize = tests.trim().parse().expect("invalid input");
    loop {
        if t == 0 {
            break;
        }
        let mut input_line = String::new();
        io::stdin()
            .read_line(&mut input_line)
            .expect("failed to read input");
        let v: Vec<i32> = input_line
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect("invalid input"))
            .collect();
        let mut ans: i32 = 0;
        let first: i32 = v[0];
        for i in 1..4 {
            if v[i] > first {
                ans += 1;
            }
        }
        t -= 1;
        println!("{}", ans);
    }
}
