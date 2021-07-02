#include <pluginlib/class_list_macros.h>
#include <pluginlib_calculator/calculator_base.h>
#include <pluginlib_calculator/calculator_plugins.h>

PLUGINLIB_EXPORT_CLASS(calculator_plugins::Add, calculator_base::CalcFunctions);
PLUGINLIB_EXPORT_CLASS(calculator_plugins::Sub, calculator_base::CalcFunctions);
PLUGINLIB_EXPORT_CLASS(calculator_plugins::Mul, calculator_base::CalcFunctions);
PLUGINLIB_EXPORT_CLASS(calculator_plugins::Div, calculator_base::CalcFunctions);

