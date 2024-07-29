# Awesome Website README

## Introduction

Welcome to the Awesome Website README! This document provides an overview of what we've learned from the website, the technologies used, and the key components that make up its structure and design.

## Technologies Used

### HTML5
The structure of the website is built using HTML5, providing a semantic and organized layout. Key elements include:

- `<!DOCTYPE html>`: Defines the document type and version of HTML.
- `<html lang="en">`: Specifies the language of the document.
- `<head>`: Contains metadata, title, and links to stylesheets.
- `<body>`: Contains the main content of the website.

### CSS3
The visual presentation is handled by CSS3, enhancing the appearance and layout. Key features include:

- External stylesheet linked via `<link rel="stylesheet" href="style.css">`.
- Google Fonts integration for custom typography.
- Flexbox for flexible and responsive layouts.
- Media queries for responsive design adjustments.

## Structure and Components

### Header
The header contains the website logo and navigation links, styled for a clean and accessible interface.

- `<header id="main-header" class="site-header">`
- `<h1 id="site-logo">Header Logo</h1>`
- Navigation with links: `<nav id="main-nav"><ul class="nav-list"><li><a href="#" class="nav-link">...</a></li></ul></nav>`

### Hero Section
The hero section highlights the main message with a prominent heading, subtext, and a call-to-action button.

- `<section id="hero-section" class="hero-section">`
- `<h2 class="main-heading">This website is awesome</h2>`
- `<p class="subtext">This website has some subtext...</p>`
- `<button class="btn-primary">Sign up</button>`
- Placeholder for an image: `<div id="hero-placeholder" class="image-placeholder">`

### Info Section
This section provides additional information through illustrated items and accompanying text.

- `<section id="info-section" class="info-section">`
- `<div class="info-container">`
- Multiple `<div class="info-item">` elements each with an illustration and text.

### Quote Section
Displays a testimonial or quote, visually distinguished with a unique background and typography.

- `<section id="quote-section" class="quote-section">`
- `<p class="quote-text">This is an inspiring quote...</p>`
- `<p class="quote-author">-Thor, God of Thunder</p>`

### Signup Section
Encourages user sign-ups with a compelling call to action and a sign-up button.

- `<section id="signup-section" class="signup-section">`
- `<div class="signup-container">`
- Call-to-action text and button: `<button class="btn-signup">Sign up</button>`

### Footer
The footer provides closing information and copyright details.

- `<footer id="main-footer" class="site-footer">`
- `<p>&copy; AG</p>`

## CSS Styling

### General Styles
- `body { display: flex; flex-direction: column; margin: 0; padding: 0; }`
- Header, hero section, and footer background color: `background-color: #1F2937;`
- Main heading: `font-size: 48px; font-weight: bold; color: #F9FAF8;`
- Navigation links: `font-size: 18px; color: #E5E7EB;`

### Buttons
- Primary and signup buttons: `background-color: #3882F6; color: white; padding: 10px 20px; border-radius: 5px; cursor: pointer;`

### Flexbox Layouts
- Header: `display: flex; justify-content: space-between; align-items: center;`
- Hero section: `display: flex; justify-content: space-between; align-items: center; height: 300px;`
- Info container: `display: flex; justify-content: center; align-items: center; gap: 40px;`

### Responsive Design
- Media queries adjust the layout for devices with max-widths of 768px and 480px.
- Example: `.hero-section { flex-direction: column; }` for screens smaller than 768px.
