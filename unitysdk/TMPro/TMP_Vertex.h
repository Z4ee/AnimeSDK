#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TMPRO_TMP_VERTEX_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1E859AF0)
#define TMPRO_TMP_VERTEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E859B20)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Vertex_TypeDefinitionIndex = 39102;

	struct alignas(4) TMP_Vertex
	{
		static ::TMPro::TMP_Vertex* StaticGet_k_Zero()
		{
			return (::TMPro::TMP_Vertex*)Il2CppClass::FromTypeDefinitionIndex(TMP_Vertex_TypeDefinitionIndex)->GetStaticField(0x97B0);
		}
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector2 uv; // 0x1C
		::UnityEngine::Vector2 uv2; // 0x24
		::UnityEngine::Vector2 uv4; // 0x2C
		::UnityEngine::Color32 color; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_VERTEX__CCTOR_OFFSET))();
		}

		static ::TMPro::TMP_Vertex get_zero()
		{
			return ((::TMPro::TMP_Vertex(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_VERTEX_GET_ZERO_OFFSET))();
		}
	};
}
