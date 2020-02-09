[@bs.val] external fetch: string => Js.Promise.t('a) = "fetch";


let atomic = () => {
  ReasonReactRouter.push("/atomic");
  
};
let blinking = () => {
  ReasonReactRouter.push("/blinking");
};
let reducer = () => {
  ReasonReactRouter.push("/reducer");
};
let fetched = () => {
  ReasonReactRouter.push("/fetched");
};
let random = () => {
  ReasonReactRouter.push("/random");
};

let allComponent = () => {
  ReasonReactRouter.push("/random");
};

[@react.component]
let make = () => {
    let url = ReasonReactRouter.useUrl();
    let content = switch (url.path) { 
        |["atomic"] => <Greeting />
        |["reducer"] => <ReducerFromReactJSDocs />
        |["fetched"] => <FetchedDogPictures />
        |["random"] => <FetchRandomDog />
        |["blinking"] =><BlinkingGreeting> {React.string("Hello!")} </BlinkingGreeting>
        |["Profil"] => <Profil />
        | _ => <div> {React.string("Erreur 404")}</div>
  };
<>
  <div>
  <button onClick={_ => atomic()}> {React.string("Atomic")} </button> 
  <button onClick={_ => blinking()}> {React.string("Blinking")} </button>
  <button onClick={_ => reducer()}> {React.string("Reducer")} </button>
  <button onClick={_ => fetched()}> {React.string("Fetched")} </button>
  <button onClick={_ => random()}> {React.string("Random dog")} </button>
  <button onClick={_ => ReasonReactRouter.push("/random")}> {React.string("All")} </button>
  </div>
{content}
</>
};


/*
let url = ReasonReactRouter.useUrl();
switch (url.path) {
  |["atomic"] => atomic()
  |["blinking"] => blinking()
  |["reducer"] => reducer()
  |["fetched"] => fetched()
  |["random"] => random()
};

*/
