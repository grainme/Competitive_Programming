use std::io;

fn main() {
    let mut tests = String::new();
    match io::stdin().read_line(&mut tests) {
        Ok(_n) => {}
        Err(_e) => {
            println!("failed to read input");
        }
    }
    let mut t: i32 = tests.trim().parse().expect("invalid input");
    let chrs = vec!['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'];
    let nbrs: Vec<i32> = (1..9).collect();
    loop {
        if t == 0 {
            break;
        }
        let mut case = String::new();
        io::stdin()
            .read_line(&mut case)
            .expect("failed to read input");
        let case_v: Vec<char> = case.trim().chars().collect();
        for &i in chrs.iter() {
            if i != case_v[0] {
                println!("{}{}", i, case_v[1]);
            } else {
                for &k in nbrs.iter() {
                    if k != case_v[1] as i32 - '0' as i32 {
                        println!("{}{}", case_v[0], k);
                    }
                }
            }
        }
        t -= 1;
    }
}
