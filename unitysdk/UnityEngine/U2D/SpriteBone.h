#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteBone_TypeDefinitionIndex = 4409;

	struct alignas(8) SpriteBone
	{
		::System::String* m_Name; // 0x10
		::UnityEngine::Vector3 m_Position; // 0x18
		::UnityEngine::Quaternion m_Rotation; // 0x24
		::System::Single m_Length; // 0x34
		::System::Int32 m_ParentId; // 0x38
	};
}
