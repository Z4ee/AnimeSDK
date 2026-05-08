#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE_GET_ENDVERTEXINDEX_OFFSET UNITYSDK_OFFSET(0x1A165C50)
#define UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE_GET_STARTVERTEXINDEX_OFFSET UNITYSDK_OFFSET(0x1A165C40)
#define UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A165C60)
#define UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A165C70)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextSpacing_Line_TypeDefinitionIndex = 80271;

	class UITextSpacing_Line : public ::System::Object
	{
	public:
		::System::Int32 _vertexCount; // 0x10
		::System::Int32 _endVertexIndex; // 0x14
		::System::Int32 _startVertexIndex; // 0x18

		::System::Void _ctor(::System::Int32 startVertexIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE__CTOR_OFFSET))(this, startVertexIndex, length);
		}

		::System::Int32 get_StartVertexIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE_GET_STARTVERTEXINDEX_OFFSET))(this);
		}

		::System::Int32 get_EndVertexIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE_GET_ENDVERTEXINDEX_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTSPACING_LINE_GET_VERTEXCOUNT_OFFSET))(this);
		}
	};
}
