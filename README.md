# Codility-solutions
Solutions for Codility Exercises problems written in cpp


<div id="top"></div>

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]




<!-- PROJECT LOGO -->
<br />
<div align="center">
templatecodility logo
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">FlightGear GCS Interpreter</h3>

  <p align="center">
    An Ground Control Stations interpreter for the FlightGear simulator.
    <br />
    <a href="https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://drive.google.com/file/d/19OLkWLgJxciY2vlvI5wWtiRhx2_WKOKG/view?usp=sharing">View Demo</a>
    ·
    <a href="https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter/issues">Report Bug</a>
    ·
    <a href="https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter/issues">Request Feature</a>
  </p>
</div>




<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#design-and-architecture">Design And Architecture</a></li>
      </ul>
    </li>
    </li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#flow-chart">Flow chart</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#see-also">See also</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

This project is a Ground Control Stations interpreter for the FlightGear simulator.
The commands to control the drone are given in a text file, the interpeter reads and executes the commands.
The task is to make the drone take off and stable itself in the air automatically.

<p align="right">(<a href="#top">back to top</a>)</p>


### Design And Architecture

The Design and Architecture of the project are as follows:

* Object-oriented programming

* Command Pattern

* Date access with O(1) time complexity  

* Threading

* Singeltone

* Polymorphism


<p align="right">(<a href="#top">back to top</a>)</p>

## Installation
- Clone the repo from 
`https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter.git`.
- Download the simulator from [FlightGear.org](http://home.flightgear.org/).
- Copy the generic_small file from the repository and paste it in the protocol folder at the location of the FlightGear files on your system. for example: /usr/share/games/flightgear/Protocol.


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage
- Open your terminal and navigate to the cloned repository. then run `make`
- run `./output`
- Lean back and chill while the drone will take off and stable itself in the air automatically.


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- FLOW CHART -->
## Flow chart
``` mermaid

graph TD;
    A[text file] --> B{Lexer};
    B --> C[CommandMap];
    B --> D[SymbolPathMap];
    C --> E[Command];
    E --> F[client];
    E --> G[Server];
    H[Drone] --> G;
    G --> I[(PathValueMap)];
    F --> H;
    
 ```
    
<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Yehuda Z Rosenberg


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Yehuda Rosenberg

yehudazevr@gmail.com

Project Link: https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- See also -->
## See also

https://wiki.flightgear.org/Main_Page

https://www.youtube.com/results?search_query=flightgear


<p align="right">(<a href="#top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/RosenbergYehuda/FlightGear-GCS-Interpeter.svg?style=for-the-badge
[contributors-url]: https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/RosenbergYehuda/FlightGear-GCS-Interpeter.svg?style=for-the-badge
[forks-url]: https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter/network/members
[stars-shield]: https://img.shields.io/github/stars/RosenbergYehuda/FlightGear-GCS-Interpeter.svg?style=for-the-badge
[stars-url]: https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter/stargazers
[issues-shield]: https://img.shields.io/github/issues/RosenbergYehuda/FlightGear-GCS-Interpeter.svg?style=for-the-badge
[issues-url]: https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter/issues
[license-shield]: https://img.shields.io/github/license/RosenbergYehuda/FlightGear-GCS-Interpeter.svg?style=for-the-badge
[license-url]: https://github.com/RosenbergYehuda/FlightGear-GCS-Interpeter/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/yehuda-rosenberg-38835243 
