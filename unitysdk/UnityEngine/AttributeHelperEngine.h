#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace UnityEngine { class DisallowMultipleComponent; }
namespace UnityEngine { class ExecuteInEditMode; }
namespace UnityEngine { class RequireComponent; }

#define UNITYENGINE_ATTRIBUTEHELPERENGINE_CHECKISEDITORSCRIPT_OFFSET UNITYSDK_OFFSET(0x1B27D960)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETDEFAULTEXECUTIONORDERFOR_OFFSET UNITYSDK_OFFSET(0x1B27DA30)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETEXECUTEMODE_OFFSET UNITYSDK_OFFSET(0x1B27D8A0)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETPARENTTYPEDISALLOWINGMULTIPLEINCLUSION_OFFSET UNITYSDK_OFFSET(0x1B27D340)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETREQUIREDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1B27D3F0)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B27DAA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AttributeHelperEngine_TypeDefinitionIndex = 4283;

	class AttributeHelperEngine : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ExecuteInEditMode*>** StaticGet__executeInEditModeArray()
		{
			return (::Il2CppArray<::UnityEngine::ExecuteInEditMode*>**)Il2CppClass::FromTypeDefinitionIndex(AttributeHelperEngine_TypeDefinitionIndex)->GetStaticField(0x2DE80);
		}
		static ::Il2CppArray<::UnityEngine::RequireComponent*>** StaticGet__requireComponentArray()
		{
			return (::Il2CppArray<::UnityEngine::RequireComponent*>**)Il2CppClass::FromTypeDefinitionIndex(AttributeHelperEngine_TypeDefinitionIndex)->GetStaticField(0x2DE88);
		}
		static ::Il2CppArray<::UnityEngine::DisallowMultipleComponent*>** StaticGet__disallowMultipleComponentArray()
		{
			return (::Il2CppArray<::UnityEngine::DisallowMultipleComponent*>**)Il2CppClass::FromTypeDefinitionIndex(AttributeHelperEngine_TypeDefinitionIndex)->GetStaticField(0x2DE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE__CCTOR_OFFSET))();
		}

		static ::System::Type* GetParentTypeDisallowingMultipleInclusion(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETPARENTTYPEDISALLOWINGMULTIPLEINCLUSION_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Type*>* GetRequiredComponents(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETREQUIREDCOMPONENTS_OFFSET))(a1);
		}

		static ::System::Int32 GetExecuteMode(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETEXECUTEMODE_OFFSET))(a1);
		}

		static ::System::Int32 CheckIsEditorScript(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_CHECKISEDITORSCRIPT_OFFSET))(a1);
		}

		static ::System::Int32 GetDefaultExecutionOrderFor(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETDEFAULTEXECUTIONORDERFOR_OFFSET))(a1);
		}
	};
}
