use std::{i64, io};

fn main() {
    let mut tests = String::new();
    io::stdin()
        .read_line(&mut tests)
        .expect("failed to read input");

    let mut line_input = String::new();
    io::stdin()
        .read_line(&mut line_input)
        .expect("pls do not panic!");
    let mut v: Vec<i32> = line_input
        .trim()
        .split(" ")
        .map(|x| x.parse().expect("Invalid Input"))
        .collect();

    let mut ans: i64 = 0;
    let mut biggest_so_far: i32 = v[0];
    let mut smallest_so_far: i32 = v[0];

    for i in v.iter_mut() {
        if *i > biggest_so_far {
            biggest_so_far = *i;
            ans += 1;
        } else if *i < smallest_so_far {
            smallest_so_far = *i;
            ans += 1;
        }
    }

    println!("{}", ans);
}
