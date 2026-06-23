#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETGENERICTYPEARGUMENTFROMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1DD02A80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETNICETYPENAME_OFFSET UNITYSDK_OFFSET(0x1DD08700)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DD08620)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_ISINT_OFFSET UNITYSDK_OFFSET(0x1DD08610)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int TypeHelpers_TypeDefinitionIndex = 32088;

	class TypeHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsInt(::System::TypeCode type)
		{
			return ((::System::Boolean(*)(::System::TypeCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_ISINT_OFFSET))(type);
		}

		static ::System::Type* GetValueType(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETVALUETYPE_OFFSET))(member);
		}

		static ::System::String* GetNiceTypeName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETNICETYPENAME_OFFSET))(type);
		}

		static ::System::Type* GetGenericTypeArgumentFromHierarchy(::System::Type* type, ::System::Type* genericTypeDefinition, ::System::Int32 argumentIndex)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETGENERICTYPEARGUMENTFROMHIERARCHY_OFFSET))(type, genericTypeDefinition, argumentIndex);
		}
	};
}
