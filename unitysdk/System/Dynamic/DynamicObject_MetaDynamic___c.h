#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class ConvertBinder; }
namespace System::Dynamic { class DeleteMemberBinder; }
namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class DynamicObject_MetaDynamic; }
namespace System::Dynamic { class GetMemberBinder; }
namespace System::Dynamic { class UnaryOperationBinder; }
namespace System::Dynamic { template <typename T> class DynamicObject_MetaDynamic_Fallback_1; }

#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDCONVERT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F74EED0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDDELETEMEMBER_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F74EEA0)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDGETMEMBER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1F74EE80)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDUNARYOPERATION_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F74EF00)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F74EE30)
#define SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F74EE70)

namespace System::Dynamic
{
	inline static constexpr unsigned int DynamicObject_MetaDynamic___c_TypeDefinitionIndex = 4983;

	class DynamicObject_MetaDynamic___c : public ::System::Object
	{
	public:
		static ::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::GetMemberBinder*>** StaticGet___9__2_0()
		{
			return (::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::GetMemberBinder*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObject_MetaDynamic___c_TypeDefinitionIndex)->GetStaticField(0x3FF0);
		}
		static ::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::UnaryOperationBinder*>** StaticGet___9__10_0()
		{
			return (::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::UnaryOperationBinder*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObject_MetaDynamic___c_TypeDefinitionIndex)->GetStaticField(0x3FF8);
		}
		static ::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::DeleteMemberBinder*>** StaticGet___9__4_0()
		{
			return (::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::DeleteMemberBinder*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObject_MetaDynamic___c_TypeDefinitionIndex)->GetStaticField(0x4000);
		}
		static ::System::Dynamic::DynamicObject_MetaDynamic___c** StaticGet___9()
		{
			return (::System::Dynamic::DynamicObject_MetaDynamic___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObject_MetaDynamic___c_TypeDefinitionIndex)->GetStaticField(0x4008);
		}
		static ::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::ConvertBinder*>** StaticGet___9__5_0()
		{
			return (::System::Dynamic::DynamicObject_MetaDynamic_Fallback_1<::System::Dynamic::ConvertBinder*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObject_MetaDynamic___c_TypeDefinitionIndex)->GetStaticField(0x4010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__CTOR_OFFSET))(this);
		}

		::System::Dynamic::DynamicMetaObject* _BindGetMember_b__2_0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::GetMemberBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::GetMemberBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDGETMEMBER_B__2_0_OFFSET))(this, this_, b, e);
		}

		::System::Dynamic::DynamicMetaObject* _BindDeleteMember_b__4_0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::DeleteMemberBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::DeleteMemberBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDDELETEMEMBER_B__4_0_OFFSET))(this, this_, b, e);
		}

		::System::Dynamic::DynamicMetaObject* _BindConvert_b__5_0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::ConvertBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::ConvertBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDCONVERT_B__5_0_OFFSET))(this, this_, b, e);
		}

		::System::Dynamic::DynamicMetaObject* _BindUnaryOperation_b__10_0(::System::Dynamic::DynamicObject_MetaDynamic* this_, ::System::Dynamic::UnaryOperationBinder* b, ::System::Dynamic::DynamicMetaObject* e)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Dynamic::DynamicObject_MetaDynamic*, ::System::Dynamic::UnaryOperationBinder*, ::System::Dynamic::DynamicMetaObject*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DYNAMICOBJECT_METADYNAMIC___C__BINDUNARYOPERATION_B__10_0_OFFSET))(this, this_, b, e);
		}
	};
}
