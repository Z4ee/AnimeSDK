#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventAction.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventFrameType.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventParamOffset.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventType.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENTS_OFFSET UNITYSDK_OFFSET(0x1EFAA7D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENT_OFFSET UNITYSDK_OFFSET(0x1EFAA800)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_PARSEEVENTPARAM_OFFSET UNITYSDK_OFFSET(0x1EFAA7B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_REPORTFRAMEPARAM1_OFFSET UNITYSDK_OFFSET(0x1EFAA7C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAA830)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ZFDefines_TypeDefinitionIndex = 38278;

	class ZFDefines : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES__CTOR_OFFSET))(this);
		}

		static ::System::Int32 ParseEventParam(::System::Int64 a1, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventParamOffset a2)
		{
			return ((::System::Int32(*)(::System::Int64, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventParamOffset))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_PARSEEVENTPARAM_OFFSET))(a1, a2);
		}

		static ::System::Int32 ReportFrameParam1(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventAction a1, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventFrameType a2)
		{
			return ((::System::Int32(*)(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventAction, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventFrameType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_REPORTFRAMEPARAM1_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasReportEvents()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENTS_OFFSET))();
		}

		static ::System::Boolean HasReportEvent(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventType a1)
		{
			return ((::System::Boolean(*)(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENT_OFFSET))(a1);
		}
	};
}
