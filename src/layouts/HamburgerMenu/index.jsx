import React from 'react';

// STYLING Import
import './style.scss';

// Image Import
import logoSquare from '../../assets/images/kalseljs-square__logo.svg';

class HamburgerMenu extends React.Component {
    render(){
        return (
            <section className="hamburger-menu">
                <div className="hamburger-menu__head">
                    <img src={logoSquare} alt="logo-square"/>

                </div>
                <ul className="hamburger-menu__links">
                    <li>
                        <a href="">Home</a>
                    </li>
                    <li>
                        <a href="">Projects</a>
                    </li>
                    <li>
                        <a href="">Events</a>
                    </li>
                    <li>
                        <a href="">Learnings</a>
                    </li>
                </ul>
                <p className="hamburger-menu__promote">
                    Hi there, if you interest with javascript world, <span><a href="" >join us</a></span>
                </p>
            </section>
        )
    }
}

export default HamburgerMenu