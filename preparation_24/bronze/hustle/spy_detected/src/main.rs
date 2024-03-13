use std::{collections::HashMap, io};

fn main() {
    let mut tests = String::new();
    io::stdin()
        .read_line(&mut tests)
        .expect("Failed to read input");
    let mut t: usize = tests.trim().parse().expect("invalid input");

    loop {
        if t == 0 {
            break;
        }

        let mut n = String::new();
        io::stdin().read_line(&mut n).expect("Failed to read input");
        let mut input_line = String::new();
        io::stdin().read_line(&mut input_line).expect("tired!");
        let v: Vec<i32> = input_line
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect("invalid input"))
            .collect();

        let mut mpp = HashMap::new();
        let mut ind_var: i32 = 0;
        for &ele in v.iter() {
            let entry = mpp.entry(ele).or_insert((0, ind_var + 1));
            entry.0 += 1;
            ind_var += 1;
        }

        for (_, value) in mpp {
            if value.0 == 1 {
                println!("{}", value.1);
                break;
            }
        }
        t -= 1;
    }
}
