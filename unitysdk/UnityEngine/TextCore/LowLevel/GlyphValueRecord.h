#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22F9ED0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x22F9E60)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22F9E00)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0xCC90)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0xCC50)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0xCC70)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphValueRecord_TypeDefinitionIndex = 5543;

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
