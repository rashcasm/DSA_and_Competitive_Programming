use std::io;
fn main() {
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input);

    let marks: i32 = input.trim().parse().expect("hehe");

    if marks > 90 {
        println!("Excellent");
    } else if marks > 80 {
        println!("Good");
    } else if marks > 70 {
        println!("Fair");
    } else if marks > 60 {
        println!("Meets Expectations");
    } else {
        println!("Below Par");
    }
}
