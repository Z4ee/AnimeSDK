#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/NAPScrollView/Plugin/Plugin_Rolling_1.h"

class MonoUITableScrollV2;

#define TABLESCROLLPLUGINROLLINGV2_ADD_OFFSET UNITYSDK_OFFSET(0x1AEAB960)
#define TABLESCROLLPLUGINROLLINGV2_DELTA_OFFSET UNITYSDK_OFFSET(0x1AEAB8A0)
#define TABLESCROLLPLUGINROLLINGV2_DIV_OFFSET UNITYSDK_OFFSET(0x1AEABAC0)
#define TABLESCROLLPLUGINROLLINGV2_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x1AEABCA0)
#define TABLESCROLLPLUGINROLLINGV2_LERP_OFFSET UNITYSDK_OFFSET(0x1AEABD70)
#define TABLESCROLLPLUGINROLLINGV2_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1AEABC20)
#define TABLESCROLLPLUGINROLLINGV2_MUL_OFFSET UNITYSDK_OFFSET(0x1AEABA10)
#define TABLESCROLLPLUGINROLLINGV2_POSTPROCESSROLLINGTARGET_OFFSET UNITYSDK_OFFSET(0x1AEAB7C0)
#define TABLESCROLLPLUGINROLLINGV2_STOPTHESHOLD_OFFSET UNITYSDK_OFFSET(0x1AEABBD0)
#define TABLESCROLLPLUGINROLLINGV2_ZERO_OFFSET UNITYSDK_OFFSET(0x1AEABB70)
#define TABLESCROLLPLUGINROLLINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAB750)
#define TABLESCROLLPLUGINROLLINGV2___BASE_POSTPROCESSROLLINGTARGET_OFFSET UNITYSDK_OFFSET(0x1AEABDF0)

inline static constexpr unsigned int TableScrollPluginRollingV2_TypeDefinitionIndex = 83387;

class TableScrollPluginRollingV2 : public ::NAPScrollView::Plugin::Plugin_Rolling_1<::NAPScrollView::DataStruct::ScrollFloat>
{
public:
	::MonoUITableScrollV2* _tableScrollV2; // 0x50

	::System::Void _ctor(::MonoUITableScrollV2* owner)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2__CTOR_OFFSET))(this, owner);
	}

	::NAPScrollView::DataStruct::ScrollFloat PostProcessRollingTarget(::NAPScrollView::DataStruct::ScrollFloat target)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_POSTPROCESSROLLINGTARGET_OFFSET))(this, target);
	}

	::NAPScrollView::DataStruct::ScrollFloat Delta(::NAPScrollView::DataStruct::ScrollFloat source, ::NAPScrollView::DataStruct::ScrollFloat other)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_DELTA_OFFSET))(this, source, other);
	}

	::NAPScrollView::DataStruct::ScrollFloat Add(::NAPScrollView::DataStruct::ScrollFloat source, ::NAPScrollView::DataStruct::ScrollFloat other)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_ADD_OFFSET))(this, source, other);
	}

	::NAPScrollView::DataStruct::ScrollFloat Mul(::NAPScrollView::DataStruct::ScrollFloat source, ::System::Single other)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_MUL_OFFSET))(this, source, other);
	}

	::NAPScrollView::DataStruct::ScrollFloat Div(::NAPScrollView::DataStruct::ScrollFloat source, ::System::Single other)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_DIV_OFFSET))(this, source, other);
	}

	::NAPScrollView::DataStruct::ScrollFloat Zero()
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_ZERO_OFFSET))(this);
	}

	::System::Single StopTheshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_STOPTHESHOLD_OFFSET))(this);
	}

	::System::Single Magnitude(::NAPScrollView::DataStruct::ScrollFloat source)
	{
		return ((::System::Single(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_MAGNITUDE_OFFSET))(this, source);
	}

	::System::Boolean IsEqualTo(::NAPScrollView::DataStruct::ScrollFloat source, ::NAPScrollView::DataStruct::ScrollFloat other)
	{
		return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_ISEQUALTO_OFFSET))(this, source, other);
	}

	::NAPScrollView::DataStruct::ScrollFloat Lerp(::NAPScrollView::DataStruct::ScrollFloat soure, ::NAPScrollView::DataStruct::ScrollFloat target, ::System::Single ratio)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2_LERP_OFFSET))(this, soure, target, ratio);
	}

	::NAPScrollView::DataStruct::ScrollFloat __base_PostProcessRollingTarget(::NAPScrollView::DataStruct::ScrollFloat P0)
	{
		return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + TABLESCROLLPLUGINROLLINGV2___BASE_POSTPROCESSROLLINGTARGET_OFFSET))(this, P0);
	}
};
