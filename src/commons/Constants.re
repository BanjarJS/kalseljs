module Storybook = {
  module Foundations = {
    [@bs.deriving jsConverter]
    type t = [ | `Typography];
  };

  module Components = {
    [@bs.deriving jsConverter]
    type t = [ | `Atomics | `Molecules];
  };

  type t = [ | `Foundations(Foundations.t) | `Components(Components.t)];

  let storiesOf =
    fun
    | `Foundations((foundation: Foundations.t)) =>
      "Foundations | " ++ (foundation |> Foundations.tToJs)
    | `Components((cell: Components.t)) =>
      "Components | " ++ (cell |> Components.tToJs);
};
