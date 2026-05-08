#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleVariable.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x197BFE50)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197BFDC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleVariableContext_TypeDefinitionIndex = 25106;

	class StyleVariableContext : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleVariableContext** StaticGet_none()
		{
			return (::UnityEngine::UIElements::StyleVariableContext**)Il2CppClass::FromTypeDefinitionIndex(StyleVariableContext_TypeDefinitionIndex)->GetStaticField(0x1EA10);
		}
		::System::Int32 m_VariableHash; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* m_Variables; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* m_SortedHash; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT__CCTOR_OFFSET))();
		}
	};
}
