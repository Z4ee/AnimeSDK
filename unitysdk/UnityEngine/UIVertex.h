#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_UIVERTEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C391CF0)

namespace UnityEngine
{
	inline static constexpr unsigned int UIVertex_TypeDefinitionIndex = 6345;

	struct alignas(4) UIVertex
	{
		static ::UnityEngine::Color32* StaticGet_s_DefaultColor()
		{
			return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(UIVertex_TypeDefinitionIndex)->GetStaticField(0x2ED0);
		}
		static ::UnityEngine::UIVertex* StaticGet_simpleVert()
		{
			return (::UnityEngine::UIVertex*)Il2CppClass::FromTypeDefinitionIndex(UIVertex_TypeDefinitionIndex)->GetStaticField(0x2ED4);
		}
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UIVertex_TypeDefinitionIndex)->GetStaticField(0x2F20);
		}
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 normal; // 0x1C
		::UnityEngine::Vector4 tangent; // 0x28
		::UnityEngine::Color32 color; // 0x38
		::UnityEngine::Vector2 uv0; // 0x3C
		::UnityEngine::Vector2 uv1; // 0x44
		::UnityEngine::Vector2 uv2; // 0x4C
		::UnityEngine::Vector2 uv3; // 0x54

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIVERTEX__CCTOR_OFFSET))();
		}
	};
}
