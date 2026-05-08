#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9D53B0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D5340)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D52E0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0x43E9B0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0x3AA590)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphValueRecord_TypeDefinitionIndex = 30946;

	struct alignas(4) GlyphValueRecord
	{
		::System::Single m_XPlacement; // 0x10
		::System::Single m_YPlacement; // 0x14
		::System::Single m_XAdvance; // 0x18
		::System::Single m_YAdvance; // 0x1C

		::System::Single get_xPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET))(this);
		}

		::System::Single get_yPlacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET))(this);
		}

		::System::Single get_xAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XADVANCE_OFFSET))(this);
		}

		::System::Single get_yAdvance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YADVANCE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::TextCore::LowLevel::GlyphValueRecord other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_1_OFFSET))(this, other);
		}
	};
}
