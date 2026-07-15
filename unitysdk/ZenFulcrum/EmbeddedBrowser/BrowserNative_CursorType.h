#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_CursorType_TypeDefinitionIndex = 37233;

	enum class BrowserNative_CursorType : ::System::Int32
	{
		Pointer = 0,
		Cross = 1,
		Hand = 2,
		IBeam = 3,
		Wait = 4,
		Help = 5,
		EastResize = 6,
		NorthResize = 7,
		NorthEastResize = 8,
		NorthWestResize = 9,
		SouthResize = 10,
		SouthEastResize = 11,
		SouthWestResize = 12,
		WestResize = 13,
		NorthSouthResize = 14,
		EastWestResize = 15,
		NorthEastSouthWestResize = 16,
		NorthWestSouthEastResize = 17,
		ColumnResize = 18,
		RowResize = 19,
		MiddlePanning = 20,
		EastPanning = 21,
		NorthPanning = 22,
		NorthEastPanning = 23,
		NorthWestPanning = 24,
		SouthPanning = 25,
		SouthEastPanning = 26,
		SouthWestPanning = 27,
		WestPanning = 28,
		Move = 29,
		VerticalText = 30,
		Cell = 31,
		ContextMenu = 32,
		Alias = 33,
		Progress = 34,
		NoDrop = 35,
		Copy = 36,
		None = 37,
		NotAllowed = 38,
		ZoomIn = 39,
		ZoomOut = 40,
		Grab = 41,
		Grabbing = 42,
		Custom = 43,
	};
}
