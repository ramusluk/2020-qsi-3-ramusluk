open ReasonUrql;
open Hooks;

[@react.component]
let make = _ => {
  let key = "3326f5048432786f5e5835880602e80de42bcb23";

  
  let request = LikeDogMutation.make(key, ());

  let (_, executeMutation) = useMutation("user(login: \"ramusluk\") {id}", ());

  <div>
    <button onClick=(_e) => executeMutation()>
        "Execute the Mutation (and Reward a Good Dog)"->React.string
    </button>
  </div>
}
 

