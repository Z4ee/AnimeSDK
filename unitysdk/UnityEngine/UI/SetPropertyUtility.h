#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine::UI { class CustomUIVectot4EqualityComparer; }

#define UNITYENGINE_UI_SETPROPERTYUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A565B20)
#define UNITYENGINE_UI_SETPROPERTYUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5A2690)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SetPropertyUtility_TypeDefinitionIndex = 5721;

	class SetPropertyUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::CustomUIVectot4EqualityComparer** StaticGet_vectot4EqualityComparer()
		{
			return (::UnityEngine::UI::CustomUIVectot4EqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(SetPropertyUtility_TypeDefinitionIndex)->GetStaticField(0x1ADD0);
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
