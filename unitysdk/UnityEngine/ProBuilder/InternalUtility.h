#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PROBUILDER_INTERNALUTILITY_CONTROLKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1B0AD840)
#define UNITYENGINE_PROBUILDER_INTERNALUTILITY_EMPTYGAMEOBJECTWITHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B0AD6C0)
#define UNITYENGINE_PROBUILDER_INTERNALUTILITY_STRINGTOVECTOR3ARRAY_OFFSET UNITYSDK_OFFSET(0x1B0ADC20)
#define UNITYENGINE_PROBUILDER_INTERNALUTILITY_TRYPARSECOLOR_OFFSET UNITYSDK_OFFSET(0x1B0AD8F0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int InternalUtility_TypeDefinitionIndex = 40749;

	class InternalUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* EmptyGameObjectWithTransform(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTERNALUTILITY_EMPTYGAMEOBJECTWITHTRANSFORM_OFFSET))(a1);
		}

		static ::System::String* ControlKeyString(::System::Char a1)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTERNALUTILITY_CONTROLKEYSTRING_OFFSET))(a1);
		}

		static ::System::Boolean TryParseColor(::System::String* a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTERNALUTILITY_TRYPARSECOLOR_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* StringToVector3Array(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTERNALUTILITY_STRINGTOVECTOR3ARRAY_OFFSET))(a1);
		}
	};
}
