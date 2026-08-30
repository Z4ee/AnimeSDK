#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AB24880)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB24A60)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB24A50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_MemberDescriptorComparer_TypeDefinitionIndex = 2640;

	class TypeDescriptor_MemberDescriptorComparer : public ::System::Object
	{
	public:
		static ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer** StaticGet_Instance()
		{
			return (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer**)Il2CppClass::FromTypeDefinitionIndex(TypeDescriptor_MemberDescriptorComparer_TypeDefinitionIndex)->GetStaticField(0x35160);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
