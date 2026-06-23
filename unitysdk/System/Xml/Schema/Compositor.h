#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Compositor_TypeDefinitionIndex = 2073;

	enum class Compositor : ::System::Int32
	{
		Root = 0,
		Include = 1,
		Import = 2,
		Redefine = 3,
	};
}
