1. What is Node.js and how does it work?

    Nodejs is javascript run time environment built on Google V8 Engine. It helps in running javascript outside the browser. It help you run javascript on server.
    
2. What is the difference between Node.js and JavaScript?

    Nodejs is run time environement while javascript is the language that run on Nodje environment.

3. What is the event loop in Node.js?
    Event Loop that monitor the queue.
    Call Stack. 
    Queue.

4. What is non-blocking I/O?

5. What are modules in Node.js?
    module in nodejs is a reuseable piece of code. that you can used in other files rather than writing again.
6. Difference between require() and import?
    require() -> commonjs (old module system used in nodejs);
    require() is dynmaic you can call it anywhere in between the code while import is static.
    require() is synchronous means it block the execution until it loads. while import is asynchronous (optimized way.)
7. What is package.json?
    It's an heart of any nodejs project. It's a configuration file that store information about your project.

8. What is npm and npx?
    npm -> Node Package Manager.
        Install packages,
        Uninstall packages,
        Update packages.
        Manage Project dependency.
    npx -> Node Package Execute.
        Runs packages.


9. What is callback hell? How to avoid it?

    It's a situation in javascript when you write so many nested callback. that makes it hard to understand, debug and maintain. It's look like pramid shape and also called pramid of doom.

    function getUserInfo(id, callback){
        setTimeout(() => {
            // fetch user Info.
            callback({username: "Deepak chaudhary"})
        }, 3000)
    }

    function getInfoFromUserName(name, callback){
        setTimeout(() => {
            // fetch Info of User.
            callback(pincode);
        })
    }


    function getLocation(pincode){
        // setTimeout(() => {
            return pincode.
        })
    }

    // Pramid of doom.
    getUserInfo(4, function(user){
        getInfoFromUserName(user, function(pincode){
            getLocation(pincode);

        })
    })

10. What are Promises and async/await?

    Promise is an object it represent future result of any operation.
    Three state -> pending,  fullfilled, rejected.
    Why? 
        Avoid callback hell, better code readability.


✅ Intermediate Node.js Interview Questions


11. Explain event-driven architecture.
    
12. What are streams in Node.js? Types of streams?
13. What is middleware in Express?
14. Difference between synchronous and asynchronous functions?
15. What is clustering in Node.js?
16. What is process and process.env?
17. How does Node.js handle child processes?
18. What is an error-first callback?
19. How does Node.js handle concurrency?
20. What is the purpose of buffer?
✅ Advanced Node.js Interview Questions
21. Explain microservices architecture using Node.js.
22. How does Node.js handle multi-threading?
23. Explain libuv and its role.
24. What is the difference between setImmediate() and process.nextTick()?
25. How to scale a Node.js application?
26. What are worker threads?
27. What is backpressure in streams?
28. How does V8 engine work internally?
29. What are the security best practices in Node.js?
30. What is JWT and how do you implement authentication?
✅ Express.js & API Related Questions
31. What is REST API?
32. Difference between PUT, PATCH, and POST?
33. Explain middleware order in Express.
34. Why do we use CORS?
35. How to handle file uploads in Node.js?
36. How to implement rate limiting?
37. What is API throttling?
38. What is the use of express-validator?
✅ Database + Node.js Questions
39. How do you connect MongoDB with Node.js?
40. What is connection pooling?
41. Difference between SQL and NoSQL?
42. What are MongoDB indexes?
43. How to handle transactions in MongoDB?
✅ Practical Coding Questions
44. Write a program to create a simple server in Node.js.
45. Read and write files asynchronously in Node.js.
46. Implement throttling using middlewares.
47. Create a REST API with CRUD operations.
48. Implement a queue using Node.js.
49. Write a function that returns a promise.
50. Build a rate limiter manually.