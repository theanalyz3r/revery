open Revery_Shaders.Shader;

let create = () => {
  let positions = [|(-0.5), 0.5, 0.5, 0.5, 0.5, (-0.5), (-0.5), (-0.5)|];

  let textureCoordinates = [|0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0|];

  let indices = [|0, 1, 2, 0, 2, 3|];

  let builder = Builder.create();

  Builder.addVertexChannel(
    builder,
    GL_FLOAT,
    2,
    VertexChannel.Position,
    positions,
  );
  Builder.addVertexChannel(
    builder,
    GL_FLOAT,
    2,
    VertexChannel.TextureCoordinate,
    textureCoordinates,
  );
  Builder.setIndices(builder, indices);

  Builder.toGeometry(builder);
};
