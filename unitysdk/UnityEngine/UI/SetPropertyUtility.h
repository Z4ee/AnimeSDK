#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine::UI { class CustomUIVector2EqualityComparer; }
namespace UnityEngine::UI { class CustomUIVector3EqualityComparer; }
namespace UnityEngine::UI { class CustomUIVector4EqualityComparer; }

#define UNITYENGINE_UI_SETPROPERTYUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1F103820)
#define UNITYENGINE_UI_SETPROPERTYUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1038B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SetPropertyUtility_TypeDefinitionIndex = 19296;

	class SetPropertyUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::CustomUIVector4EqualityComparer** StaticGet_vector4EqualityComparer()
		{
			return (::UnityEngine::UI::CustomUIVector4EqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(SetPropertyUtility_TypeDefinitionIndex)->GetStaticField(0x8A20);
		}
		static ::UnityEngine::UI::CustomUIVector2EqualityComparer** StaticGet_vector2EqualityComparer()
		{
			return (::UnityEngine::UI::CustomUIVector2EqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(SetPropertyUtility_TypeDefinitionIndex)->GetStaticField(0x8A28);
		}
		static ::UnityEngine::UI::CustomUIVector3EqualityComparer** StaticGet_vector3EqualityComparer()
		{
			return (::UnityEngine::UI::CustomUIVector3EqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(SetPropertyUtility_TypeDefinitionIndex)->GetStaticField(0x8A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SETPROPERTYUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Boolean SetColor(::UnityEngine::Color& currentValue, ::UnityEngine::Color newValue)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SETPROPERTYUTILITY_SETCOLOR_OFFSET))(currentValue, newValue);
		}
	};
}
