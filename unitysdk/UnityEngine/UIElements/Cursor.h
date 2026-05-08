#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x884D10)
#define UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x884D00)
#define UNITYENGINE_UIELEMENTS_CURSOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x884DE0)
#define UNITYENGINE_UIELEMENTS_CURSOR_GET_DEFAULTCURSORID_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define UNITYENGINE_UIELEMENTS_CURSOR_GET_HOTSPOT_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_UIELEMENTS_CURSOR_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_UIELEMENTS_CURSOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x197A5ED0)
#define UNITYENGINE_UIELEMENTS_CURSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x884DF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Cursor_TypeDefinitionIndex = 24935;

	struct alignas(8) Cursor
	{
		::UnityEngine::Texture2D* _texture_k__BackingField; // 0x10
		::UnityEngine::Vector2 _hotspot_k__BackingField; // 0x18
		::System::Int32 _defaultCursorId_k__BackingField; // 0x20

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_hotspot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GET_HOTSPOT_OFFSET))(this);
		}

		::System::Int32 get_defaultCursorId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GET_DEFAULTCURSORID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::UIElements::Cursor other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::Cursor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::Cursor style1, ::UnityEngine::UIElements::Cursor style2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::Cursor, ::UnityEngine::UIElements::Cursor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_OP_EQUALITY_OFFSET))(style1, style2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_TOSTRING_OFFSET))(this);
		}
	};
}
