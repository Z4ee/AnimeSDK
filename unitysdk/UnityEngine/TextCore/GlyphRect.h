#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA76840)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA767D0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA76770)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2C3430)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_X_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_Y_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1E6C4970)
#define UNITYENGINE_TEXTCORE_GLYPHRECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C4B30)
#define UNITYENGINE_TEXTCORE_GLYPHRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x588040)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int GlyphRect_TypeDefinitionIndex = 32493;

	struct alignas(4) GlyphRect
	{
		static ::UnityEngine::TextCore::GlyphRect* StaticGet_s_ZeroGlyphRect()
		{
			return (::UnityEngine::TextCore::GlyphRect*)Il2CppClass::FromTypeDefinitionIndex(GlyphRect_TypeDefinitionIndex)->GetStaticField(0x8030);
		}
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT__CTOR_OFFSET))(this, x, y, width, height);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT__CCTOR_OFFSET))();
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_X_OFFSET))(this);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_Y_OFFSET))(this);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_HEIGHT_OFFSET))(this);
		}

		static ::UnityEngine::TextCore::GlyphRect get_zero()
		{
			return ((::UnityEngine::TextCore::GlyphRect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_ZERO_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::TextCore::GlyphRect other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextCore::GlyphRect))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_1_OFFSET))(this, other);
		}
	};
}
