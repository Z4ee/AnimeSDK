#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Reflection/TypeInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x1BD90D80)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x1BD90DC0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x1BD90E00)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BD90E80)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD90E40)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BD90CF0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1BD90F00)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENT_OFFSET UNITYSDK_OFFSET(0x1BD90EC0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x1BD90F80)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1BD90F40)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x1BD91000)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x1BD90FC0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BD91040)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x1BD91080)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x1BD910C0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETNESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1BD91140)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BD91100)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BD91180)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x1BD911C0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1BD90AC0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1BD90A70)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1BD90B10)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1BD90B60)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1BD90BB0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1BD90C00)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1BD90CA0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD90C50)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x1BD90D40)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x1BD91200)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD91240)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1BD91280)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x1BD912C0)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x1BD91300)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1BD91340)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x1BD91380)
#define SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1BD913C0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int EnumBuilder_TypeDefinitionIndex = 643;

	class EnumBuilder : public ::System::Reflection::TypeInfo
	{
	public:
		::System::Reflection::Assembly* get_Assembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLY_OFFSET))(this);
		}

		::System::String* get_AssemblyQualifiedName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET))(this);
		}

		::System::Type* get_BaseType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_BASETYPE_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_FULLNAME_OFFSET))(this);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_GUID_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_MODULE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Type* GetElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETELEMENTTYPE_OFFSET))(this);
		}

		::System::Type* get_UnderlyingSystemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes GetAttributeFlagsImpl()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags a1, ::System::Reflection::Binder* a2, ::System::Reflection::CallingConventions a3, ::Il2CppArray<::System::Type*>* a4, ::Il2CppArray<::System::Reflection::ParameterModifier>* a5)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* GetConstructors(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCONSTRUCTORS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENT_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* GetEvents(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETEVENTS_OFFSET))(this, a1);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELD_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* GetFields(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETFIELDS_OFFSET))(this, a1);
		}

		::System::Type* GetInterface(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETINTERFACE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Type*>* GetInterfaces()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETINTERFACES_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMembers(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMEMBERS_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Reflection::CallingConventions a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetMethods(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETMETHODS_OFFSET))(this, a1);
		}

		::System::Type* GetNestedType(::System::String* a1, ::System::Reflection::BindingFlags a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETNESTEDTYPE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Type*>* GetNestedTypes(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETNESTEDTYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* GetProperties(::System::Reflection::BindingFlags a1)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTIES_OFFSET))(this, a1);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Type* a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_GETPROPERTYIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean HasElementTypeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_HASELEMENTTYPEIMPL_OFFSET))(this);
		}

		::System::Object* InvokeMember(::System::String* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::System::Object* a4, ::Il2CppArray<::System::Object*>* a5, ::Il2CppArray<::System::Reflection::ParameterModifier>* a6, ::System::Globalization::CultureInfo* a7, ::Il2CppArray<::System::String*>* a8)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_INVOKEMEMBER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean IsArrayImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISARRAYIMPL_OFFSET))(this);
		}

		::System::Boolean IsByRefImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISBYREFIMPL_OFFSET))(this);
		}

		::System::Boolean IsCOMObjectImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISCOMOBJECTIMPL_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPointerImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPOINTERIMPL_OFFSET))(this);
		}

		::System::Boolean IsPrimitiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ENUMBUILDER_ISPRIMITIVEIMPL_OFFSET))(this);
		}
	};
}
