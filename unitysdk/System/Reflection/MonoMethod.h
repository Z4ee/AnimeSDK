#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/PInvokeAttributes.h"
#include "unitysdk/System/Reflection/RuntimeMethodInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_0C7BBDFFD203B46C_OFFSET UNITYSDK_OFFSET(0x1C2CB700)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_227461ECA347F719_OFFSET UNITYSDK_OFFSET(0x1C2CC140)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_3409B72DE16670D7_OFFSET UNITYSDK_OFFSET(0x1C2CC390)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_3DAA10467C74B801_OFFSET UNITYSDK_OFFSET(0x1C2CB8C0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x1C2CC130)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_5DCD2917CBE6E984_OFFSET UNITYSDK_OFFSET(0x1C2CB8B0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_62DDE419CEA20711_OFFSET UNITYSDK_OFFSET(0x1C2CB710)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_6841F8CAC82B9A48_OFFSET UNITYSDK_OFFSET(0x1C2CC6D0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_6C2F5C73BC592C0C_OFFSET UNITYSDK_OFFSET(0x1C2CB6A0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_6E60EA9DEFBD06D3_OFFSET UNITYSDK_OFFSET(0x1C2CBB50)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_78810BEC4D9DFF5E_OFFSET UNITYSDK_OFFSET(0x1C2CB820)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_80A105D4D05CBD05_OFFSET UNITYSDK_OFFSET(0x1C2CC150)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C2CB610)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_8CAAC837D1BDD16C_1_OFFSET UNITYSDK_OFFSET(0x1C2CB690)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_8CAAC837D1BDD16C_OFFSET UNITYSDK_OFFSET(0x1C2CB680)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1C2CB860)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A0420FB436E33D57_OFFSET UNITYSDK_OFFSET(0x1C2CC830)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x1C2CC840)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A51678A8D4BC4D2E_OFFSET UNITYSDK_OFFSET(0x1C2CC6E0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A886283F1E86B93E_OFFSET UNITYSDK_OFFSET(0x1C2CC120)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1C2CC050)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_AA0FB569ADA413C9_OFFSET UNITYSDK_OFFSET(0x1C2CB620)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_ACDCC589F31A1218_OFFSET UNITYSDK_OFFSET(0x1C2CBFD0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_C0F5355C66E7CFE2_OFFSET UNITYSDK_OFFSET(0x1C2CB670)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_CC189634DEC8C028_OFFSET UNITYSDK_OFFSET(0x1C2CC720)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C2CC800)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0x1C2CC0C0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_DAB8FA6A764B2239_OFFSET UNITYSDK_OFFSET(0x1C2CC060)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_DFD1CA50C1B9981F_OFFSET UNITYSDK_OFFSET(0x1C2CBFF0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_E5B66DFF261369AD_OFFSET UNITYSDK_OFFSET(0x1C2CB770)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_E93FB20C44775568_OFFSET UNITYSDK_OFFSET(0x1C2CBEB0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_EABBA8A24DDDB637_OFFSET UNITYSDK_OFFSET(0x1C2CC6C0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C2CC8C0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C2CC6B0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F03C8C30B60ADB89_OFFSET UNITYSDK_OFFSET(0x1C2CBFE0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F1779B45DA47D40A_OFFSET UNITYSDK_OFFSET(0x1C2CC170)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethod_TypeDefinitionIndex = 593;

	class MonoMethod : public ::System::Reflection::RuntimeMethodInfo
	{
	public:
		::System::IntPtr Field_5_0; // 0x10
		::System::String* Field_5_1; // 0x18
		::System::Type* Field_5_2; // 0x20

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		static ::System::String* Method_5_AA0FB569ADA413C9(::System::Reflection::MethodBase* method)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_AA0FB569ADA413C9_OFFSET))(method);
		}

		static ::System::Reflection::MonoMethod* Method_5_C0F5355C66E7CFE2(::System::Reflection::MonoMethod* method, ::System::Boolean definition)
		{
			return ((::System::Reflection::MonoMethod*(*)(::System::Reflection::MonoMethod*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_C0F5355C66E7CFE2_OFFSET))(method, definition);
		}

		::System::Reflection::MethodInfo* Method_5_8CAAC837D1BDD16C()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_8CAAC837D1BDD16C_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_5_8CAAC837D1BDD16C_1()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_8CAAC837D1BDD16C_1_OFFSET))(this);
		}

		::System::Type* Method_5_6C2F5C73BC592C0C()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_6C2F5C73BC592C0C_OFFSET))(this);
		}

		::System::Reflection::ICustomAttributeProvider* Method_5_0C7BBDFFD203B46C()
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_0C7BBDFFD203B46C_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes Method_5_62DDE419CEA20711()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_62DDE419CEA20711_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_5_E5B66DFF261369AD()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_E5B66DFF261369AD_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_5_78810BEC4D9DFF5E()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_78810BEC4D9DFF5E_OFFSET))(this);
		}

		::System::Int32 Method_5_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Object* Method_5_5DCD2917CBE6E984(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters, ::System::Exception*& exc)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Exception*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_5DCD2917CBE6E984_OFFSET))(this, obj, parameters, exc);
		}

		::System::Object* Method_5_3DAA10467C74B801(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_3DAA10467C74B801_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		static ::System::Void Method_5_6E60EA9DEFBD06D3(::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::System::Reflection::ParameterInfo*>* pinfo, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr)
		{
			return ((::System::Void(*)(::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_6E60EA9DEFBD06D3_OFFSET))(binder, args, pinfo, culture, invokeAttr);
		}

		::System::RuntimeMethodHandle Method_5_ACDCC589F31A1218()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_ACDCC589F31A1218_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes Method_5_F03C8C30B60ADB89()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F03C8C30B60ADB89_OFFSET))(this);
		}

		::System::Reflection::CallingConventions Method_5_DFD1CA50C1B9981F()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_DFD1CA50C1B9981F_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_DAB8FA6A764B2239()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_DAB8FA6A764B2239_OFFSET))(this);
		}

		::System::String* Method_5_CFDB2DF757369D2B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_CFDB2DF757369D2B_OFFSET))(this);
		}

		::System::Boolean Method_5_A886283F1E86B93E(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A886283F1E86B93E_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_227461ECA347F719(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_227461ECA347F719_OFFSET))(this, attributeType, inherit);
		}

		::System::Void Method_5_80A105D4D05CBD05(::System::Reflection::PInvokeAttributes& flags, ::System::String*& entryPoint, ::System::String*& dllName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInvokeAttributes&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_80A105D4D05CBD05_OFFSET))(this, flags, entryPoint, dllName);
		}

		::Il2CppArray<::System::Object*>* Method_5_F1779B45DA47D40A()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F1779B45DA47D40A_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_5_3409B72DE16670D7(::Il2CppArray<::System::Type*>* methodInstantiation)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_3409B72DE16670D7_OFFSET))(this, methodInstantiation);
		}

		::System::Reflection::MethodInfo* Method_5_6841F8CAC82B9A48(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_6841F8CAC82B9A48_OFFSET))(this, types);
		}

		::Il2CppArray<::System::Type*>* Method_5_EABBA8A24DDDB637()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_EABBA8A24DDDB637_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_5_A51678A8D4BC4D2E()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A51678A8D4BC4D2E_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_5_CC189634DEC8C028()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_CC189634DEC8C028_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_5_CE34EA208837238D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_CE34EA208837238D_OFFSET))(this);
		}

		::System::Boolean Method_5_E93FB20C44775568()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_E93FB20C44775568_OFFSET))(this);
		}

		::System::Reflection::MethodBody* Method_5_A0420FB436E33D57()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A0420FB436E33D57_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_5_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_A3C117624446E448_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
		}
	};
}
