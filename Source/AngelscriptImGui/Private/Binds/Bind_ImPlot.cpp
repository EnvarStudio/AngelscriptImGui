// Copyright Envar Games AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Utilities/ImGuiUtilities.h"

#include "implot.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImAxis(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImAxis, "Axis indices. The values assigned may change; NEVER hardcode these.");
	IMGUI_ENUM_VALUE(ImAxis, X1,);
	IMGUI_ENUM_VALUE(ImAxis, X2,);
	IMGUI_ENUM_VALUE(ImAxis, X3,);
	IMGUI_ENUM_VALUE(ImAxis, Y1,);
	IMGUI_ENUM_VALUE(ImAxis, Y2,);
	IMGUI_ENUM_VALUE(ImAxis, Y3,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotFlags, "Options for plots (see BeginPlot).");
	IMGUI_ENUM_VALUE(ImPlotFlags, None,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoTitle,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoLegend,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoMouseText,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoInputs,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoMenus,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoBoxSelect,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoChild,);
	IMGUI_ENUM_VALUE(ImPlotFlags, NoFrame,);
	IMGUI_ENUM_VALUE(ImPlotFlags, Equal,);
	IMGUI_ENUM_VALUE(ImPlotFlags, Crosshairs,);
	IMGUI_ENUM_VALUE(ImPlotFlags, AntiAliased,);
	IMGUI_ENUM_VALUE(ImPlotFlags, CanvasOnly,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotAxisFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotAxisFlags, "Options for plot axes (see SetupAxis).");
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, None,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, NoLabel,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, NoGridLines,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, NoTickMarks,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, NoTickLabels,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, NoInitialFit,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, NoMenus,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, Opposite,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, Foreground,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, LogScale,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, Time,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, Invert,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, AutoFit,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, RangeFit,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, LockMin,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, LockMax,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, Lock,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, NoDecorations,);
	IMGUI_ENUM_VALUE(ImPlotAxisFlags, AuxDefault,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotSubplotFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotSubplotFlags, "Options for subplots (see BeginSubplot).");
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, None,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, NoTitle,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, NoLegend,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, NoMenus,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, NoResize,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, NoAlign,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, ShareItems,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, LinkRows,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, LinkCols,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, LinkAllX,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, LinkAllY,);
	IMGUI_ENUM_VALUE(ImPlotSubplotFlags, ColMajor,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotLegendFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotLegendFlags, "Options for legends (see SetupLegend)");
	IMGUI_ENUM_VALUE(ImPlotLegendFlags, None,);
	IMGUI_ENUM_VALUE(ImPlotLegendFlags, NoButtons,);
	IMGUI_ENUM_VALUE(ImPlotLegendFlags, NoHighlightItem,);
	IMGUI_ENUM_VALUE(ImPlotLegendFlags, NoHighlightAxis,);
	IMGUI_ENUM_VALUE(ImPlotLegendFlags, NoMenus,);
	IMGUI_ENUM_VALUE(ImPlotLegendFlags, Outside,);
	IMGUI_ENUM_VALUE(ImPlotLegendFlags, Horizontal,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotMouseTextFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotMouseTextFlags, "Options for mouse hover text (see SetupMouseText)");
	IMGUI_ENUM_VALUE(ImPlotMouseTextFlags, None,);
	IMGUI_ENUM_VALUE(ImPlotMouseTextFlags, NoAuxAxes,);
	IMGUI_ENUM_VALUE(ImPlotMouseTextFlags, NoFormat,);
	IMGUI_ENUM_VALUE(ImPlotMouseTextFlags, ShowAlways,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotDragToolFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotDragToolFlags, "Options for DragPoint, DragLine, DragRect");
	IMGUI_ENUM_VALUE(ImPlotDragToolFlags, None,);
	IMGUI_ENUM_VALUE(ImPlotDragToolFlags, NoCursors,);
	IMGUI_ENUM_VALUE(ImPlotDragToolFlags, NoFit,);
	IMGUI_ENUM_VALUE(ImPlotDragToolFlags, NoInputs,);
	IMGUI_ENUM_VALUE(ImPlotDragToolFlags, Delayed,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotBarGroupsFlags(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotBarGroupsFlags, "Flags for ImPlot::PlotBarGroups");
	IMGUI_ENUM_VALUE(ImPlotBarGroupsFlags, None,);
	IMGUI_ENUM_VALUE(ImPlotBarGroupsFlags, Stacked,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotCond(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotCond, "Represents a condition for SetupAxisLimits etc.");
	IMGUI_ENUM_VALUE(ImPlotCond, None,);
	IMGUI_ENUM_VALUE(ImPlotCond, Always,);
	IMGUI_ENUM_VALUE(ImPlotCond, Once,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotCol(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotCol, "Plot styling colors.");
	IMGUI_ENUM_VALUE(ImPlotCol, Line,);
	IMGUI_ENUM_VALUE(ImPlotCol, Fill,);
	IMGUI_ENUM_VALUE(ImPlotCol, MarkerOutline,);
	IMGUI_ENUM_VALUE(ImPlotCol, MarkerFill,);
	IMGUI_ENUM_VALUE(ImPlotCol, ErrorBar,);
	IMGUI_ENUM_VALUE(ImPlotCol, FrameBg,);
	IMGUI_ENUM_VALUE(ImPlotCol, PlotBg,);
	IMGUI_ENUM_VALUE(ImPlotCol, PlotBorder,);
	IMGUI_ENUM_VALUE(ImPlotCol, LegendBg,);
	IMGUI_ENUM_VALUE(ImPlotCol, LegendBorder,);
	IMGUI_ENUM_VALUE(ImPlotCol, LegendText,);
	IMGUI_ENUM_VALUE(ImPlotCol, TitleText,);
	IMGUI_ENUM_VALUE(ImPlotCol, InlayText,);
	IMGUI_ENUM_VALUE(ImPlotCol, AxisText,);
	IMGUI_ENUM_VALUE(ImPlotCol, AxisGrid,);
	IMGUI_ENUM_VALUE(ImPlotCol, AxisTick,);
	IMGUI_ENUM_VALUE(ImPlotCol, AxisBg,);
	IMGUI_ENUM_VALUE(ImPlotCol, AxisBgHovered,);
	IMGUI_ENUM_VALUE(ImPlotCol, AxisBgActive,);
	IMGUI_ENUM_VALUE(ImPlotCol, Selection,);
	IMGUI_ENUM_VALUE(ImPlotCol, Crosshairs,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotStyleVar(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotStyleVar, "Plot styling variables.");
	IMGUI_ENUM_VALUE(ImPlotStyleVar, LineWeight,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, Marker,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MarkerSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MarkerWeight,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, FillAlpha,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, ErrorBarSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, ErrorBarWeight,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, DigitalBitHeight,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, DigitalBitGap,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, PlotBorderSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MinorAlpha,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MajorTickLen,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MinorTickLen,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MajorTickSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MinorTickSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MajorGridSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MinorGridSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, PlotPadding,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, LabelPadding,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, LegendPadding,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, LegendInnerPadding,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, LegendSpacing,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, MousePosPadding,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, AnnotationPadding,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, FitPadding,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, PlotDefaultSize,);
	IMGUI_ENUM_VALUE(ImPlotStyleVar, PlotMinSize,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotMarker(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotMarker, "Marker specifications.");
	IMGUI_ENUM_VALUE(ImPlotMarker, None,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Circle,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Square,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Diamond,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Up,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Down,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Left,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Right,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Cross,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Plus,);
	IMGUI_ENUM_VALUE(ImPlotMarker, Asterisk,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotColormap(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotColormap, "Built-in colormaps");
	IMGUI_ENUM_VALUE(ImPlotColormap, Deep,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Dark,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Pastel,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Paired,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Viridis,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Plasma,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Hot,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Cool,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Pink,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Jet,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Twilight,);
	IMGUI_ENUM_VALUE(ImPlotColormap, RdBu,);
	IMGUI_ENUM_VALUE(ImPlotColormap, BrBG,);
	IMGUI_ENUM_VALUE(ImPlotColormap, PiYG,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Spectral,);
	IMGUI_ENUM_VALUE(ImPlotColormap, Greys,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImPlotLocation(FAngelscriptBinds::EOrder::Early, []
{
	IMGUI_ENUM(ImPlotLocation, "Used to position items on a plot (e.g. legends, labels, etc.)");
	IMGUI_ENUM_VALUE(ImPlotLocation, Center,);
	IMGUI_ENUM_VALUE(ImPlotLocation, North,);
	IMGUI_ENUM_VALUE(ImPlotLocation, South,);
	IMGUI_ENUM_VALUE(ImPlotLocation, West,);
	IMGUI_ENUM_VALUE(ImPlotLocation, East,);
	IMGUI_ENUM_VALUE(ImPlotLocation, NorthWest,);
	IMGUI_ENUM_VALUE(ImPlotLocation, NorthEast,);
	IMGUI_ENUM_VALUE(ImPlotLocation, SouthWest,);
	IMGUI_ENUM_VALUE(ImPlotLocation, SouthEast,);
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImGui_Plot(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImPlot");
	FAngelscriptBinds::BindGlobalFunction("bool BeginPlot(const FString& Title, const FVector2f& Size = FVector2f(-1, 0), EImPlotFlags Flags = EImPlotFlags::None)",
	[](const FString& Title, const FVector2f& Size, const ImPlotFlags Flags) -> bool
	{
		return ImPlot::BeginPlot(IMGUI_STRING(Title), ToImGui(Size), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void EndPlot()",
	[]() -> void
	{
		ImPlot::EndPlot();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImGui_SubPlot(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImPlot");
	FAngelscriptBinds::BindGlobalFunction("bool BeginSubplots(const FString& Title, int32 Rows, int32 Columns, const FVector2f& Size, EImPlotSubplotFlags Flags = EImPlotSubplotFlags::None)",
	[](const FString& Title, const int32 Rows, const int32 Columns, const FVector2f& Size, const ImPlotSubplotFlags Flags) -> bool
	{
		return ImPlot::BeginSubplots(IMGUI_STRING(Title), Rows, Columns, ToImGui(Size), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("bool BeginSubplots(const FString& Title, TArray<float32>& RowRatios, TArray<float32>& ColumnRatios, const FVector2f& Size, EImPlotSubplotFlags Flags = EImPlotSubplotFlags::None)",
	[](const FString& Title, TArray<float>& RowRatios, TArray<float>& ColumnRatios, const FVector2f& Size, const ImPlotSubplotFlags Flags) -> bool
	{
		return ImPlot::BeginSubplots(IMGUI_STRING(Title), RowRatios.Num(), ColumnRatios.Num(), ToImGui(Size), Flags, RowRatios.GetData(), ColumnRatios.GetData());
	});
	FAngelscriptBinds::BindGlobalFunction("void EndSubplots()",
	[]() -> void
	{
		ImPlot::EndSubplots();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImGui_Setup(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImPlot");
	FAngelscriptBinds::BindGlobalFunction("void SetupAxis(EImAxis Axis, const FString& Label = FString(), EImPlotAxisFlags Flags = EImPlotAxisFlags::None)",
	[](const ImAxis Axis, const FString& Label, const ImPlotAxisFlags Flags)
	{
		ImPlot::SetupAxis(Axis, Label.IsEmpty() ? nullptr : IMGUI_STRING(Label), Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxisLimits(EImAxis Axis, float64 VMin, float64 VMax, EImPlotCond Condition = EImPlotCond::Once)",
	[](const ImAxis Axis, const double VMin, const double VMax, const ImPlotCond Condition)
	{
		ImPlot::SetupAxisLimits(Axis, VMin, VMax, Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxisLinks(EImAxis Axis, float64& LinkMin, float64& LinkMax)",
	[](const ImAxis Axis, double& LinkMin, double& LinkMax)
	{
		ImPlot::SetupAxisLinks(Axis, &LinkMin, &LinkMax);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxisFormat(EImAxis Axis, const FString& Format)",
	[](const ImAxis Axis, const FString& Format)
	{
		ImPlot::SetupAxisFormat(Axis, IMGUI_STRING(Format));
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxisTicks(EImAxis Axis, const TArray<float64>& Values, bool KeepDefault = false)",
	[](const ImAxis Axis, const TArray<double>& Values, const bool KeepDefault)
	{
		ImPlot::SetupAxisTicks(Axis, Values.GetData(), Values.Num(), nullptr, KeepDefault);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxisTicks(EImAxis Axis, const TArray<float64>& Values, const TArray<FString>& Labels = TArray<FString>(), bool KeepDefault = false)",
	[](const ImAxis Axis, const TArray<double>& Values, const TArray<FString>& Labels, const bool KeepDefault)
	{
		if (ensureAlwaysMsgf(Values.Num() == Labels.Num(), TEXT("ImPlot::SetupAxisTicks: Values.Num() != Labels.Num()")))
		{
			FStringArrayToPtrHelper LabelsBuffer(Labels);
			ImPlot::SetupAxisTicks(Axis, Values.GetData(), Values.Num(), LabelsBuffer.GetPtr(), KeepDefault);
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxisTicks(EImAxis Axis, float64 VMin, float64 VMax, int32 NTicks, bool KeepDefault = false)",
	[](const ImAxis Axis, const double VMin, const double VMax, const int32 NTicks, const bool KeepDefault)
	{
		ImPlot::SetupAxisTicks(Axis, VMin, VMax, NTicks, nullptr, KeepDefault);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxisTicks(EImAxis Axis, float64 VMin, float64 VMax, const TArray<FString>& Labels, bool KeepDefault = false)",
	[](const ImAxis Axis, const double VMin, const double VMax, const TArray<FString>& Labels, const bool KeepDefault)
	{
		FStringArrayToPtrHelper LabelsBuffer(Labels);
		ImPlot::SetupAxisTicks(Axis, VMin, VMax, Labels.Num(), LabelsBuffer.GetPtr(), KeepDefault);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxes(const FString& XLabel, const FString& YLabel, EImPlotAxisFlags XFlags = EImPlotAxisFlags::None, EImPlotAxisFlags YFlags = EImPlotAxisFlags::None)",
	[](const FString& XLabel, const FString& YLabel, const ImPlotAxisFlags XFlags, const ImPlotAxisFlags YFlags)
	{
		ImPlot::SetupAxes(IMGUI_STRING(XLabel), IMGUI_STRING(YLabel), XFlags, YFlags);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupAxesLimits(float64 XMin, float64 XMax, float64 YMin, float64 YMax, EImPlotCond Condition = EImPlotCond::Once)",
	[](const double XMin, const double XMax, const double YMin, const double YMax, const ImPlotCond Condition)
	{
		ImPlot::SetupAxesLimits(XMin, XMax, YMin, YMax, Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupLegend(EImPlotLocation Location, EImPlotLegendFlags Flags = EImPlotLegendFlags::None)",
	[](const ImPlotLocation Location, const ImPlotLegendFlags Flags)
	{
		ImPlot::SetupLegend(Location, Flags);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetupMouseText(EImPlotLocation Location, EImPlotMouseTextFlags Flags = EImPlotMouseTextFlags::None)",
	[](const ImPlotLocation Location, const ImPlotMouseTextFlags Flags)
	{
		ImPlot::SetupMouseText(Location, Flags);
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImGui_SetNext(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImPlot");
	FAngelscriptBinds::BindGlobalFunction("void SetNextAxisLimits(EImAxis Axis, float64 VMin, float64 VMax, EImPlotCond Condition = EImPlotCond::Once)",
	[](const ImAxis Axis, const double VMin, const double VMax, const ImPlotCond Condition)
	{
		ImPlot::SetNextAxisLimits(Axis, VMin, VMax, Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextAxisLinks(EImAxis Axis, float64& LinkMin, float64& LinkMax)",
	[](const ImAxis Axis, double& LinkMin, double& LinkMax)
	{
		ImPlot::SetNextAxisLinks(Axis, &LinkMin, &LinkMax);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextAxisToFit(EImAxis Axis)",
	[](const ImAxis Axis)
	{
		ImPlot::SetNextAxisToFit(Axis);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextAxesLimits(float64 XMin, float64 XMax, float64 YMin, float64 YMax, EImPlotCond Condition = EImPlotCond::Once)",
	[](const double XMin, const double XMax, const double YMin, const double YMax, const ImPlotCond Condition)
	{
		ImPlot::SetNextAxesLimits(XMin, XMax, YMin, YMax, Condition);
	});
	FAngelscriptBinds::BindGlobalFunction("void SetNextAxesToFit()",
	[]()
	{
		ImPlot::SetNextAxesToFit();
	});
});

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImGui_PlotItems(FAngelscriptBinds::EOrder::Late, []
{
	FAngelscriptBinds::FNamespace ImGuiNamespace("ImPlot");
	FAngelscriptBinds::BindGlobalFunction("void PlotLine(const FString& Label, const TArray<FVector2f> Values)",
	[](const FString& Label, const TArray<FVector2f>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotLine(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotLine(const FString& Label, const TArray<FVector2D> Values)",
	[](const FString& Label, const TArray<FVector2D>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotLine(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotScatter(const FString& Label, const TArray<FVector2f> Values)",
	[](const FString& Label, const TArray<FVector2f>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotScatter(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotScatter(const FString& Label, const TArray<FVector2D> Values)",
	[](const FString& Label, const TArray<FVector2D>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotScatter(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotStairs(const FString& Label, const TArray<FVector2f> Values)",
	[](const FString& Label, const TArray<FVector2f>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotStairs(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotStairs(const FString& Label, const TArray<FVector2D> Values)",
	[](const FString& Label, const TArray<FVector2D>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotStairs(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotShaded(const FString& Label, const TArray<FVector2f> Values, float64 YReference = 0)",
	[](const FString& Label, const TArray<FVector2f>& Values, const double YReference)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotShaded(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), YReference, 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotShaded(const FString& Label, const TArray<FVector2D> Values, float64 YReference = 0)",
	[](const FString& Label, const TArray<FVector2D>& Values, const double YReference)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotShaded(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), YReference, 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotBars(const FString& Label, const TArray<FVector2f> Values, float64 BarWidth = 0.67)",
	[](const FString& Label, const TArray<FVector2f>& Values, const double BarWidth)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotBars(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), BarWidth, 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotBars(const FString& Label, const TArray<FVector2D> Values, float64 BarWidth = 0.67)",
	[](const FString& Label, const TArray<FVector2D>& Values, const double BarWidth)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotBars(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), BarWidth, 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotBarsH(const FString& Label, const TArray<FVector2f> Values, float64 BarHeight = 0.67)",
	[](const FString& Label, const TArray<FVector2f>& Values, const double BarHeight)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotBarsH(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), BarHeight, 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotBarsH(const FString& Label, const TArray<FVector2D> Values, float64 BarHeight = 0.67)",
	[](const FString& Label, const TArray<FVector2D>& Values, const double BarHeight)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotBarsH(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), BarHeight, 0, sizeof(FVector2D));
		}
	});
	// void PlotBarGroups(const char* const label_ids[], const T* values, int item_count, int group_count, double group_width=0.67, double x0=0, ImPlotBarGroupsFlags flags=ImPlotBarGroupsFlags_None);
	// void PlotBarGroupsH(const char* const label_ids[], const T* values, int item_count, int group_count, double group_height=0.67, double y0=0, ImPlotBarGroupsFlags flags=ImPlotBarGroupsFlags_None);
	// void PlotErrorBars(const char* label_id, const T* xs, const T* ys, const T* err, int count, int offset=0, int stride=sizeof(T));
	// void PlotErrorBars(const char* label_id, const T* xs, const T* ys, const T* neg, const T* pos, int count, int offset=0, int stride=sizeof(T));
	// void PlotErrorBarsH(const char* label_id, const T* xs, const T* ys, const T* err, int count, int offset=0, int stride=sizeof(T));
	// void PlotErrorBarsH(const char* label_id, const T* xs, const T* ys, const T* neg, const T* pos, int count, int offset=0, int stride=sizeof(T));
	FAngelscriptBinds::BindGlobalFunction("void PlotStems(const FString& Label, const TArray<FVector2f> Values, float64 BarHeight = 0.67)",
	[](const FString& Label, const TArray<FVector2f>& Values, const double BarHeight)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotStems(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), BarHeight, 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotStems(const FString& Label, const TArray<FVector2D> Values, float64 BarHeight = 0.67)",
	[](const FString& Label, const TArray<FVector2D>& Values, const double BarHeight)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotStems(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), BarHeight, 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotVLines(const FString& Label, const TArray<float32> Values)",
	[](const FString& Label, const TArray<float>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotVLines(IMGUI_STRING(Label), Values.GetData(), Values.Num(), 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotVLines(const FString& Label, const TArray<float64> Values)",
	[](const FString& Label, const TArray<double>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotVLines(IMGUI_STRING(Label), Values.GetData(), Values.Num(), 0, sizeof(double));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotHLines(const FString& Label, const TArray<float32> Values)",
	[](const FString& Label, const TArray<float>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotHLines(IMGUI_STRING(Label), Values.GetData(), Values.Num(), 0, sizeof(FVector2D));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotHLines(const FString& Label, const TArray<float64> Values)",
	[](const FString& Label, const TArray<double>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotHLines(IMGUI_STRING(Label), Values.GetData(), Values.Num(), 0, sizeof(double));
		}
	});
	// void PlotPieChart(const char* const label_ids[], const T* values, int count, double x, double y, double radius, bool normalize=false, const char* label_fmt="%.1f", double angle0=90);
	// void PlotHeatmap(const char* label_id, const T* values, int rows, int cols, double scale_min=0, double scale_max=0, const char* label_fmt="%.1f", const ImPlotPoint& bounds_min=ImPlotPoint(0,0), const ImPlotPoint& bounds_max=ImPlotPoint(1,1));
	// double PlotHistogram(const char* label_id, const T* values, int count, int bins=ImPlotBin_Sturges, bool cumulative=false, bool density=false, ImPlotRange range=ImPlotRange(), bool outliers=true, double bar_scale=1.0);
	// double PlotHistogram2D(const char* label_id, const T* xs, const T* ys, int count, int x_bins=ImPlotBin_Sturges, int y_bins=ImPlotBin_Sturges, bool density=false, ImPlotRect range=ImPlotRect(), bool outliers=true);
	FAngelscriptBinds::BindGlobalFunction("void PlotDigital(const FString& Label, const TArray<FVector2f> Values)",
	[](const FString& Label, const TArray<FVector2f>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotDigital(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2f));
		}
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotDigital(const FString& Label, const TArray<FVector2D> Values)",
	[](const FString& Label, const TArray<FVector2D>& Values)
	{
		if (!Values.IsEmpty())
		{
			ImPlot::PlotDigital(IMGUI_STRING(Label), &Values[0].X, &Values[0].Y, Values.Num(), 0, sizeof(FVector2D));
		}
	});
	// void PlotImage(const char* label_id, ImTextureID user_texture_id, const ImPlotPoint& bounds_min, const ImPlotPoint& bounds_max, const ImVec2& uv0=ImVec2(0,0), const ImVec2& uv1=ImVec2(1,1), const ImVec4& tint_col=ImVec4(1,1,1,1));
	FAngelscriptBinds::BindGlobalFunction("void PlotText(const FString& Text, float64 X, float64 Y, bool Vertical = false, const FVector2f& Offset = FVector2f(0, 0))",
	[](const FString& Text, const double X, const double Y, const bool Vertical = false, const FVector2f& Offset = FVector2f(0, 0))
	{
		ImPlot::PlotText(IMGUI_STRING(Text), X, Y, Vertical, ToImGui(Offset));
	});
	FAngelscriptBinds::BindGlobalFunction("void PlotDummy(const FString& Label)",
	[](const FString& Label)
	{
		ImPlot::PlotDummy(IMGUI_STRING(Label));
	});
});
