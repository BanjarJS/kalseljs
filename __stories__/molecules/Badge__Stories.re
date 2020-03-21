open BsStorybook.Story;

// Bind Module
module StorybookConst = Constants.Storybook;
module Action = BsStorybook.Action;

let str = React.string;

// @TODO add system block to get description about that component
let jsModule = [%raw "module"];
storiesOf(StorybookConst.storiesOf(`Components(`Molecules)), jsModule)
->(
    add("Badge", () =>
      <>
        <div>
          <Badge text="Javascript" prefixIcon={<Icons.Mail />} />
          <br />
        </div>
      </>
    )
  );
