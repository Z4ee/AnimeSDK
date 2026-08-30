#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET UNITYSDK_OFFSET(0xE66EF30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_00_OFFSET UNITYSDK_OFFSET(0xE82C2B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_01_OFFSET UNITYSDK_OFFSET(0xE82C2C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_02_OFFSET UNITYSDK_OFFSET(0xE82C2D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_03_OFFSET UNITYSDK_OFFSET(0xE82C2E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_04_OFFSET UNITYSDK_OFFSET(0xE82C3E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_05_OFFSET UNITYSDK_OFFSET(0xE82C3F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_06_OFFSET UNITYSDK_OFFSET(0xE82C400)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_07_OFFSET UNITYSDK_OFFSET(0xE82C410)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_08_OFFSET UNITYSDK_OFFSET(0xE82C420)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_09_OFFSET UNITYSDK_OFFSET(0xE82C520)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_10_OFFSET UNITYSDK_OFFSET(0xE82C530)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_11_OFFSET UNITYSDK_OFFSET(0xE82C630)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_12_OFFSET UNITYSDK_OFFSET(0xE82C730)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_13_OFFSET UNITYSDK_OFFSET(0xE82C740)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_14_OFFSET UNITYSDK_OFFSET(0xE82C750)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_15_OFFSET UNITYSDK_OFFSET(0xE82C760)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_16_OFFSET UNITYSDK_OFFSET(0xE82C770)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_17_OFFSET UNITYSDK_OFFSET(0xE82C780)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_18_OFFSET UNITYSDK_OFFSET(0xE82C790)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_19_OFFSET UNITYSDK_OFFSET(0xE82C7A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_20_OFFSET UNITYSDK_OFFSET(0xE82C7B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_21_OFFSET UNITYSDK_OFFSET(0xE82C8B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_22_OFFSET UNITYSDK_OFFSET(0xE82C8C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_23_OFFSET UNITYSDK_OFFSET(0xE82C8D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_24_OFFSET UNITYSDK_OFFSET(0xE82C8E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_25_OFFSET UNITYSDK_OFFSET(0xE82C8F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_26_OFFSET UNITYSDK_OFFSET(0xE82C900)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_27_OFFSET UNITYSDK_OFFSET(0xE82CA00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_28_OFFSET UNITYSDK_OFFSET(0xE82CB00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_29_OFFSET UNITYSDK_OFFSET(0xE82CCF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_30_OFFSET UNITYSDK_OFFSET(0xE82CD00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_31_OFFSET UNITYSDK_OFFSET(0xE82CD10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_00_OFFSET UNITYSDK_OFFSET(0xE66F6D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_01_OFFSET UNITYSDK_OFFSET(0xE67E900)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_02_OFFSET UNITYSDK_OFFSET(0xE68EB70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_03_OFFSET UNITYSDK_OFFSET(0xE69CA10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_04_OFFSET UNITYSDK_OFFSET(0xE6AAF20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_05_OFFSET UNITYSDK_OFFSET(0xE6B7A50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_06_OFFSET UNITYSDK_OFFSET(0xE6C4DC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_07_OFFSET UNITYSDK_OFFSET(0xE6D26F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_08_OFFSET UNITYSDK_OFFSET(0xE6E0020)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_09_OFFSET UNITYSDK_OFFSET(0xE6EF040)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_10_OFFSET UNITYSDK_OFFSET(0xE6FE330)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_11_OFFSET UNITYSDK_OFFSET(0xE70C6B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_12_OFFSET UNITYSDK_OFFSET(0xE719990)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_13_OFFSET UNITYSDK_OFFSET(0xE726600)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_14_OFFSET UNITYSDK_OFFSET(0xE7350A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_15_OFFSET UNITYSDK_OFFSET(0xE742F60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_16_OFFSET UNITYSDK_OFFSET(0xE750870)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_17_OFFSET UNITYSDK_OFFSET(0xE75EA90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_18_OFFSET UNITYSDK_OFFSET(0xE76C450)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_19_OFFSET UNITYSDK_OFFSET(0xE7799E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_20_OFFSET UNITYSDK_OFFSET(0xE7883D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_21_OFFSET UNITYSDK_OFFSET(0xE794D70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_22_OFFSET UNITYSDK_OFFSET(0xE7A3F10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_23_OFFSET UNITYSDK_OFFSET(0xE7B24B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_24_OFFSET UNITYSDK_OFFSET(0xE7C02A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_25_OFFSET UNITYSDK_OFFSET(0xE7CD080)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_26_OFFSET UNITYSDK_OFFSET(0xE7DAAF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_27_OFFSET UNITYSDK_OFFSET(0xE7E9410)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_28_OFFSET UNITYSDK_OFFSET(0xE7F6BB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_29_OFFSET UNITYSDK_OFFSET(0xE803F20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_30_OFFSET UNITYSDK_OFFSET(0xE8111E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_31_OFFSET UNITYSDK_OFFSET(0xE81EA30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET UNITYSDK_OFFSET(0xE82CD20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET UNITYSDK_OFFSET(0xE82CD90)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int XLua_Gen_Initer_Register___TypeDefinitionIndex = 51997;

	class XLua_Gen_Initer_Register__ : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET))(this);
		}

		static ::System::Void Init(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_00_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_00_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_01_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_01_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_02_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_02_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_03_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_03_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_04_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_04_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_05_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_05_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_06_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_06_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_07_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_07_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_08(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_08_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_08(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_08_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_09(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_09_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_09(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_09_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_10(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_10_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_10(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_10_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_11(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_11_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_11(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_11_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_12(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_12_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_12(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_12_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_13(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_13_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_13(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_13_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_14(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_14_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_14(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_14_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_15(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_15_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_15(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_15_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_16(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_16_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_16(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_16_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_17(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_17_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_17(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_17_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_18(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_18_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_18(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_18_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_19(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_19_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_19(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_19_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_20(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_20_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_20(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_20_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_21(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_21_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_21(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_21_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_22(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_22_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_22(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_22_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_23(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_23_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_23(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_23_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_24(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_24_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_24(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_24_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_25(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_25_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_25(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_25_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_26(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_26_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_26(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_26_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_27(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_27_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_27(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_27_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_28(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_28_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_28(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_28_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_29(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_29_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_29(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_29_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_30(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_30_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_30(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_30_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_31(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_31_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_31(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_31_OFFSET))(a1, a2);
		}
	};
}
