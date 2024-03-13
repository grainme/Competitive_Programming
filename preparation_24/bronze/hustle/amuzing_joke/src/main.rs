use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let mut b = String::new();
    let mut c = String::new();
    io::stdin().read_line(&mut b).unwrap();
    io::stdin().read_line(&mut c).unwrap();

    let mut res = String::from(format!(
        "{}{}",
        input.trim().to_string(),
        b.trim().to_string()
    ));

    let mut v: Vec<char> = res.chars().collect();
    let mut org: Vec<char> = c.trim().to_string().chars().collect();

    org.sort();
    v.sort();

    input = org.into_iter().collect();
    res = v.into_iter().collect();

    match res == input {
        true => {
            println!("YES");
        }
        _ => {
            println!("NO");
        }
    }
}
