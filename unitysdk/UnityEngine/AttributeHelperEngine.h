#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace UnityEngine { class DisallowMultipleComponent; }
namespace UnityEngine { class ExecuteInEditMode; }
namespace UnityEngine { class RequireComponent; }

#define UNITYENGINE_ATTRIBUTEHELPERENGINE_CHECKISEDITORSCRIPT_OFFSET UNITYSDK_OFFSET(0x1EA5B150)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETDEFAULTEXECUTIONORDERFOR_OFFSET UNITYSDK_OFFSET(0x1EA5B220)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETEXECUTEMODE_OFFSET UNITYSDK_OFFSET(0x1EA5B090)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETPARENTTYPEDISALLOWINGMULTIPLEINCLUSION_OFFSET UNITYSDK_OFFSET(0x1EA5AB50)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE_GETREQUIREDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1EA5AC10)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5B2A0)
#define UNITYENGINE_ATTRIBUTEHELPERENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5B290)

namespace UnityEngine
{
	inline static constexpr unsigned int AttributeHelperEngine_TypeDefinitionIndex = 5324;

	class AttributeHelperEngine : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::DisallowMultipleComponent*>** StaticGet__disallowMultipleComponentArray()
		{
			return (::Il2CppArray<::UnityEngine::DisallowMultipleComponent*>**)Il2CppClass::FromTypeDefinitionIndex(AttributeHelperEngine_TypeDefinitionIndex)->GetStaticField(0x4E90);
		}
		static ::Il2CppArray<::UnityEngine::ExecuteInEditMode*>** StaticGet__executeInEditModeArray()
		{
			return (::Il2CppArray<::UnityEngine::ExecuteInEditMode*>**)Il2CppClass::FromTypeDefinitionIndex(AttributeHelperEngine_TypeDefinitionIndex)->GetStaticField(0x4E98);
		}
		static ::Il2CppArray<::UnityEngine::RequireComponent*>** StaticGet__requireComponentArray()
		{
			return (::Il2CppArray<::UnityEngine::RequireComponent*>**)Il2CppClass::FromTypeDefinitionIndex(AttributeHelperEngine_TypeDefinitionIndex)->GetStaticField(0x4EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE__CCTOR_OFFSET))();
		}

		static ::System::Type* GetParentTypeDisallowingMultipleInclusion(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETPARENTTYPEDISALLOWINGMULTIPLEINCLUSION_OFFSET))(type);
		}

		static ::Il2CppArray<::System::Type*>* GetRequiredComponents(::System::Type* klass)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETREQUIREDCOMPONENTS_OFFSET))(klass);
		}

		static ::System::Int32 GetExecuteMode(::System::Type* klass)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETEXECUTEMODE_OFFSET))(klass);
		}

		static ::System::Int32 CheckIsEditorScript(::System::Type* klass)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_CHECKISEDITORSCRIPT_OFFSET))(klass);
		}

		static ::System::Int32 GetDefaultExecutionOrderFor(::System::Type* klass)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ATTRIBUTEHELPERENGINE_GETDEFAULTEXECUTIONORDERFOR_OFFSET))(klass);
		}
	};
}
