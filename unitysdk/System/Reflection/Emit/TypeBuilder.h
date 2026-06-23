#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
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
namespace System::Reflection::Emit { class ConstructorBuilder; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class GenericTypeParameterBuilder; }
namespace System::Reflection::Emit { class MethodBuilder; }

#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_CREATETYPEINFO_OFFSET UNITYSDK_OFFSET(0x1CB214E0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1CB21530)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEFIELD_OFFSET UNITYSDK_OFFSET(0x1CB21580)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CB215D0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1CB21670)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEMETHOD_OFFSET UNITYSDK_OFFSET(0x1CB21620)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x1CB217B0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x1CB217F0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x1CB21830)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1CB218B0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CB21870)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1CB21710)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x1CB21930)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETEVENT_OFFSET UNITYSDK_OFFSET(0x1CB218F0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x1CB219B0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETFIELD_1_OFFSET UNITYSDK_OFFSET(0x1CB21970)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1CB216C0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x1CB21A30)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x1CB219F0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CB21A70)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21AB0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x1CB21AF0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETNESTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1CB21B70)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1CB21B30)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CB21BB0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21BF0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1CB212B0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1CB21260)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1CB21300)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1CB21350)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1CB213A0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1CB213F0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1CB21490)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CB21440)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x1CB21770)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21C30)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1CB21C70)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21CB0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21CF0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21D30)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1CB21D70)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21DB0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1CB21DF0)
#define SYSTEM_REFLECTION_EMIT_TYPEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB21760)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int TypeBuilder_TypeDefinitionIndex = 625;

	class TypeBuilder : public ::System::Reflection::TypeInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_ASSEMBLY_OFFSET))(this);
		}

		::System::String* get_AssemblyQualifiedName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_ASSEMBLYQUALIFIEDNAME_OFFSET))(this);
		}

		::System::Type* get_BaseType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_BASETYPE_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_FULLNAME_OFFSET))(this);
		}

		::System::Guid get_GUID()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_GUID_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_MODULE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Reflection::TypeInfo* CreateTypeInfo()
		{
			return ((::System::Reflection::TypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_CREATETYPEINFO_OFFSET))(this);
		}

		::System::Reflection::Emit::ConstructorBuilder* DefineConstructor(::System::Reflection::MethodAttributes attributes, ::System::Reflection::CallingConventions callingConvention, ::Il2CppArray<::System::Type*>* parameterTypes)
		{
			return ((::System::Reflection::Emit::ConstructorBuilder*(*)(::PVOID, ::System::Reflection::MethodAttributes, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINECONSTRUCTOR_OFFSET))(this, attributes, callingConvention, parameterTypes);
		}

		::System::Reflection::Emit::FieldBuilder* DefineField(::System::String* fieldName, ::System::Type* type, ::System::Reflection::FieldAttributes attributes)
		{
			return ((::System::Reflection::Emit::FieldBuilder*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Reflection::FieldAttributes))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEFIELD_OFFSET))(this, fieldName, type, attributes);
		}

		::Il2CppArray<::System::Reflection::Emit::GenericTypeParameterBuilder*>* DefineGenericParameters(::Il2CppArray<::System::String*>* names)
		{
			return ((::Il2CppArray<::System::Reflection::Emit::GenericTypeParameterBuilder*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEGENERICPARAMETERS_OFFSET))(this, names);
		}

		::System::Reflection::Emit::MethodBuilder* DefineMethod(::System::String* name, ::System::Reflection::MethodAttributes attributes)
		{
			return ((::System::Reflection::Emit::MethodBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::MethodAttributes))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEMETHOD_OFFSET))(this, name, attributes);
		}

		::System::Reflection::Emit::MethodBuilder* DefineMethod_1(::System::String* name, ::System::Reflection::MethodAttributes attributes, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* parameterTypes)
		{
			return ((::System::Reflection::Emit::MethodBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::MethodAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_DEFINEMETHOD_1_OFFSET))(this, name, attributes, returnType, parameterTypes);
		}

		static ::System::Reflection::FieldInfo* GetField(::System::Type* type, ::System::Reflection::FieldInfo* field)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETFIELD_OFFSET))(type, field);
		}

		::System::Type* GetElementType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETELEMENTTYPE_OFFSET))(this);
		}

		::System::Type* get_UnderlyingSystemType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GET_UNDERLYINGSYSTEMTYPE_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes GetAttributeFlagsImpl()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETATTRIBUTEFLAGSIMPL_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCONSTRUCTORIMPL_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* GetConstructors(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCONSTRUCTORS_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETEVENT_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* GetEvents(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETEVENTS_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::FieldInfo* GetField_1(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETFIELD_1_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* GetFields(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETFIELDS_OFFSET))(this, bindingAttr);
		}

		::System::Type* GetInterface(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETINTERFACE_OFFSET))(this, name, ignoreCase);
		}

		::Il2CppArray<::System::Type*>* GetInterfaces()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETINTERFACES_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* GetMembers(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETMEMBERS_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETMETHODIMPL_OFFSET))(this, name, bindingAttr, binder, callConvention, types, modifiers);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetMethods(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETMETHODS_OFFSET))(this, bindingAttr);
		}

		::System::Type* GetNestedType(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETNESTEDTYPE_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Type*>* GetNestedTypes(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETNESTEDTYPES_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* GetProperties(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETPROPERTIES_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_GETPROPERTYIMPL_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Boolean HasElementTypeImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_HASELEMENTTYPEIMPL_OFFSET))(this);
		}

		::System::Object* InvokeMember(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::String*>* namedParameters)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_INVOKEMEMBER_OFFSET))(this, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
		}

		::System::Boolean IsArrayImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISARRAYIMPL_OFFSET))(this);
		}

		::System::Boolean IsByRefImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISBYREFIMPL_OFFSET))(this);
		}

		::System::Boolean IsCOMObjectImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISCOMOBJECTIMPL_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsPointerImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISPOINTERIMPL_OFFSET))(this);
		}

		::System::Boolean IsPrimitiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDER_ISPRIMITIVEIMPL_OFFSET))(this);
		}
	};
}
